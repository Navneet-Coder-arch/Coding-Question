#include <bits/stdc++.h>

using namespace std;

#define size 10

// function to sort 0 1 2 in an array (DNF algo)
void sort012(int *arr, int n){

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {

        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        }

        else if (arr[mid] == 1) {
            mid++;
        }

        else {
            swap(arr[mid], arr[high]);
            high--;
        }

    }

    return;
}

int main () {
    int* arr = new int[size] {0, 1, 2, 0, 1, 1, 2, 1, 0, 0};

    sort012(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}
