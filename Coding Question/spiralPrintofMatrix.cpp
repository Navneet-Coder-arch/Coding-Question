#include <iostream>

using namespace std;

//function for printing the matrix in spiral form
void spiralPrintMatrix (int matrix[][4], int rows, int cols) {

//s => starting; e => ending;
    int sCol = 0, sRow = 0;
    int eCol = cols - 1, eRow = rows - 1;

    int count = 0, total = (rows * cols);

    while (count < total) {

        //for starting col
        for (int idx = sCol; idx <= eCol && count < total; idx++) {

            cout << matrix[sRow][idx] << ' ';
            count++;

        }sRow++;

        //for ending col
        for (int idx = sRow; idx <= eRow && count < total; idx++) {

            cout << matrix[idx][eCol] << ' ';
            count++;

        }eCol--;

        //for ending row
        for (int idx = eCol; idx >= 0 && count < total; idx--) {

            cout << matrix[eRow][idx] << ' ';
            count++;

        }eRow--;

        //for starting col
        for (int idx = eRow; idx >= sRow && count < total; idx--) {

            cout << matrix[idx][sCol] << ' ';
            count++;

        }sCol++;

    }

    cout << endl;

    return;
}

int main() {
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    spiralPrintMatrix(matrix, 3, 4);

    return 0;
}
