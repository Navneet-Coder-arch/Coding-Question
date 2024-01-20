#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(int* arr, int n){

    bool swapped = false;    

    for (int i = 0; i < (n - 1); i++){

        for (int j = 0; j < (n - i) - 1; j++){

            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }

        }

        if (swapped != true){
            break;
        }
        swapped = false;

    }

    return;
}

// requires sorted array
void delDuplicateElements(int* arr, int &n){

    vector<int> delIdx;

    for (int i = 0 ; i < n; i++){
        
        if (arr[i] == arr[i + 1]){
            delIdx.push_back(i);
        }

    }

    for (int k: delIdx){

        int j = k + 1;

        while (j < n){
            arr[j - 1] = arr[j];
            j++;       
        }

        n--;

    }

    return;
}

void displayArray(int *arr, int n){

    cout << "Elements of the array after the deletion of duplicate elements:\n";

    for (int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }

    cout << endl;

    return;
}

int main() {
    int n; // taking size of the array from user
    cout << "Enter the size of array: ";
    cin >> n;

    if (n == 0){
        cout << "Array Is Empty!" << endl;
        return 0;
    }

    int* arr = new int[n];

    //taking elements from user
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n ; i++){
        cin >> *(arr + i);
    }

    bubbleSort(arr, n);
    delDuplicateElements(arr, n);
    displayArray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
