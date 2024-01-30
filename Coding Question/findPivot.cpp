#include <iostream>

using namespace std;
#define size 6

// function for finding the pinot in the given array
int findPivot (int arr[], int n) {

    int start = 0, end = n - 1; 

    while (start < end) {

        int mid = (start + end) / 2;

        if (arr[0] <= arr[mid]){
            start = mid + 1;
        }

        else {
            end = mid;
        }

    }

    return start;
}

int main() {
    int arr[size] = {3, 7, 8, 9, 1, 2};
    
    cout << "Pivot: " << findPivot(arr, size);

    return 0;
}
