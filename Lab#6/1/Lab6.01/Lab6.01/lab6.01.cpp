#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 20;


void createArray(int arr[], int size, int min, int max) {
    srand((unsigned)time(nullptr));
    for (int i = 0; i < size; ++i) {
        arr[i] = min + rand() % (max - min + 1);
    }
}


void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}


int countElements(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0 && i % 5 != 0) {
            count++;
        }
    }
    return count;
}


int sumElements(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0 && i % 5 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}


void replaceElements(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0 && i % 5 != 0) {
            arr[i] = 0;
        }
    }
}


int main() {
    int arr[SIZE];

    createArray(arr, SIZE, -20, 50);

    cout << "Initial array: ";
    printArray(arr, SIZE);


    int count = countElements(arr, SIZE);
    int sum = sumElements(arr, SIZE);

    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;


    replaceElements(arr, SIZE);

    cout << "Modified array: ";
    printArray(arr, SIZE);

    return 0;
}
