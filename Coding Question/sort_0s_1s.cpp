#include <iostream>

using namespace std;

#define size 10

// function to sort 0s and 1s in the array
void sort01 (int arr[], int n) {

    int start = 0, end = n - 1;

    while (start < end) {

        if (arr[start] == 0) {
            start++;
        }

        else if (arr[end] == 1) {
            end--;
        }

        else if (arr[start] == 1 && arr[end] == 0) {
            swap(arr[start++], arr[end--]);
        }

    }

    return;
}

int main() {
    int arr[size] = {0, 1, 0, 1, 0, 1, 0, 0, 1, 1};

    sort01(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}
