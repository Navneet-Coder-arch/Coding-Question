#include <iostream>

using namespace std;
#define size 6
#define toFind 1

int findPivot (int arr[], int n) {

    int start = 0, end = n - 1;

    while (start < end) {

        int mid = (start + end) / 2;

        if (arr[0] <= arr[mid]) {
            start = mid + 1;
        }

        else {
            end = mid;
        }

    }

    return start;
}

bool binarySearch (int arr[], int start, int end, int key) {

    while (start < end) {

        int mid = (start + end ) / 2;

        if (arr[mid] == key) {
            return true;
        }

        else if (key < arr[mid]) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }

    }

    return false;
}

int main() {
    int arr[size] = {7, 8, 9, 1, 2, 3};

    int pivot = findPivot(arr, size);

    if (arr[pivot] == toFind) {
        cout << "Found!!" << endl;
    }

    else if (arr[0] < toFind) {
        
        if (binarySearch(arr, 0, pivot - 1, toFind)) {
            cout << "Found!!" << endl;
        }
        
        else {
            cout << "Not Found!!" << endl;
        }

    }

    else {

        if (binarySearch(arr, pivot + 1, size - 1, toFind)) {
            cout << "Found!!" << endl;
        }
        
        else {
            cout << "Not Found!!" << endl;
        }

    }

    return 0;
}
