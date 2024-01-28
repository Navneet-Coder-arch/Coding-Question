#include <iostream>

using namespace std;

// function for printing the passed matrix in wave form
void wavePrintMatrix (int matrix[][4], int rows, int cols) {

    for (int j = 0; j < cols; j++) { // 'j' is reffering to cols

        if (j & 1) { // checking if the cols index in odd (according to the observation)
        //from bottom to top
            for (int i = (rows - 1); i >= 0; i--) {
                cout << matrix[i][j] << ' ';
            }

        }
        
        else {
        //from top to bottom
            for (int i = 0; i < rows; i++) {
                cout << matrix[i][j] << ' ';
            }

        }

    }

    cout << endl;

    return;
}

int main() {
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    wavePrintMatrix(matrix, 3, 4);

    return 0;
}
