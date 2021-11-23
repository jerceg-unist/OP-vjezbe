#include <iostream>
#include <cstdlib>
#include <ctime>
#include "matrix_genMatrix.h"
#include "printMatrix.h"
#include "transponseMatrix.h"
#include "addMatrix.h"
#include "subMatrix.h"
#include "multiplyMatrix.h"

using namespace std;

typedef struct Matrix Matrix;

Matrix* make_matrix(int rows, int cols) {
    Matrix* matrix = new Matrix[0];
    matrix->data = new float*[rows];
    for(int i = 0; i < rows; i++)
        matrix->data[i] = new float[cols];
    //return matrix;
    cout << "enter members of the matrix: " << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++) {
            cin >> matrix->data[i][j];
        }

    matrix->rows = rows;
    matrix->cols = cols;

    return matrix;
}

int main(void) {

    int rows, cols;

    cout<<"enter the number of rows: ";
    cin >> rows;
    cout << endl;
    cout << "enter the number of columns: ";
    cin >> cols;
    Matrix* matrix[2];
    matrix[0] = make_matrix(rows, cols);
    matrix[1] = generate_matrix(0,15,3,2);
    print_matrix(matrix[1]);
    //transpose_matrix(matrix[0]);
    //transpose_matrix(matrix[1]);
    //multiply_matrix(matrix[0], matrix[1]);
    //add_matrix(matrix[0], matrix[1]);
    //sub_matrix(matrix[0], matrix[1]);



    return 0;
}
