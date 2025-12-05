#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 20;

void createArrayRec(int arr[], int size, int min, int max, int index = 0) {
    if (index >= size) return;
    arr[index] = min + rand() % (max - min + 1);
    createArrayRec(arr, size, min, max, index + 1); 
}

void printArrayRec(const int arr[], int size, int index = 0) {
    if (index >= size) {
        cout << endl;
        return;
    }
    cout << setw(4) << arr[index];
    printArrayRec(arr, size, index + 1);
}

int countElementsRec(const int arr[], int size, int index = 0) {
    if (index >= size) return 0;
    int add = (arr[index] > 0 && index % 5 != 0) ? 1 : 0;
    return add + countElementsRec(arr, size, index + 1);
}


int sumElementsRec(const int arr[], int size, int index = 0) {
    if (index >= size) return 0;
    int add = (arr[index] > 0 && index % 5 != 0) ? arr[index] : 0;
    return add + sumElementsRec(arr, size, index + 1);
}

void replaceElementsRec(int arr[], int size, int index = 0) {
    if (index >= size) return;
    if (arr[index] > 0 && index % 5 != 0) {
        arr[index] = 0;
    }
    replaceElementsRec(arr, size, index + 1);
}

int main() {
    srand((unsigned)time(nullptr));
    int arr[SIZE];

    createArrayRec(arr, SIZE, -20, 50);

    cout << "Initial array: ";
    printArrayRec(arr, SIZE);


    int count = countElementsRec(arr, SIZE);
    int sum = sumElementsRec(arr, SIZE);

    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;


    replaceElementsRec(arr, SIZE);

    cout << "Modified array: ";
    printArrayRec(arr, SIZE);

    return 0;
}
