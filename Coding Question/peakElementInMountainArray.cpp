#include <iostream>

using namespace std;
#define size 6

// function to find the peak element's index in mountain array
int peakElementInMountainArr (int arr[], int n) {

    int start = 0, end = n - 1;

    while (start < end) {

        int mid = (start + end) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }

        else {
            end = mid;
        }

    }

    return start;
}

int main() {
    int arr[6] = {8, 30, 5, 4, 3, 2}; // moutain array

    cout << "Peak Element is at index: " << peakElementInMountainArr(arr, size) << endl;    

    return 0;
}
