#include <iostream>
#include <algorithm>

using namespace std;

// function to find the first occurence
int firstOccOfElementInArr (int* arr, int n, int ele) {

    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (arr[mid] == ele) {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] > ele) {
            end = mid - 1;
        }
        
        else {
            start = mid + 1;
        }

    }

    return ans;
}

// function to find the last occurence
int lastOccOfElementInArr (int* arr, int n, int ele) {

    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (arr[mid] == ele) {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] > ele) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }

    }

    return ans;
}

// function to find the number of occurences
inline int findOccurences (int firstOcc, int lastOcc) { return (lastOcc - firstOcc) + 1; }

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int ele;
    cin >> ele;

    sort(arr, arr + n);

    int firstOcc = firstOccOfElementInArr(arr, n, ele);
    int lastOcc = lastOccOfElementInArr(arr, n, ele);

    cout << "Number of occurences of " << ele << " in the array: " << findOccurences(firstOcc, lastOcc) << endl;

    return 0;
}
