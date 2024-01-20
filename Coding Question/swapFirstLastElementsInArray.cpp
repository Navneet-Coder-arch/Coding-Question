#include <iostream>

using namespace std;

void swapFirstLastElements(int* arr, int n) {

    int begin = 0, end = n - 1;

    while (begin < end) {

        swap(arr[begin++], arr[end--]);

    }

    return;
}

void displayArray(int* arr, int n) {

    cout << "Elements of the array after getting interchanged:\n";

    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n == 0){
        cout << "\n Array Is Empty\n" << endl;
        return 0;
    }

    int* arr = new int[n];
    
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    swapFirstLastElements(arr, n);
    displayArray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
