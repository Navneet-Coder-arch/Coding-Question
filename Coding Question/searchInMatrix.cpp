#include <iostream>

using namespace std;

//function to check whether the element is present in the matrix or not (binary search)
bool isFound_Matix (int matrix[][4], int rows, int cols, int key) {

    int start = 0, end = (rows * cols) - 1;
    int mid = start + (end - start) / 2;

    while (start < end) {

        int midElement = matrix[mid/cols][mid%cols];

        if (key == midElement) {
            return true;
        }

        else if (key > midElement) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return false;
}

int main() {
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = -14854589;

    if (isFound_Matix(matrix, 3, 4, target)) {
        cout << "Found !!" << endl;
    }

    else {
        cout << "Not Found !!" << endl;
    }

    return 0;
}
