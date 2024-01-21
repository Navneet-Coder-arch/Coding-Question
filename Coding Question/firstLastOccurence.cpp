#include <iostream>

using namespace std;

// function for finding the first occurrence of ele 'k' in the array
int firstOccurrence(int* arr, int n, int k) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k) {
            ans = mid;
            end = mid - 1;
        } else if (k < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

// function for finding the last occurrence of ele 'k' in the array
int lastOccurrence(int* arr, int n, int k) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k) {
            ans = mid;
            start = mid + 1;
        } else if (k < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << firstOccurrence(arr, n, k) << " " << lastOccurrence(arr, n, k) << endl;

    delete[] arr;
    arr = NULL;

    return 0;
}
