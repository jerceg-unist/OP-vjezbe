using namespace std;

void multiply_matrix(Matrix* matrix_1, Matrix* matrix_2) {
    int rslt[matrix_1->rows][matrix_2->cols];
    if (matrix_1->cols != matrix_2->rows){
      cout <<"they cannot be multiplied";
      return ;
    }


    cout <<"the result of multiplication is: "<<endl;

    for (int i = 0; i < matrix_1->rows; i++) {
        for (int j = 0; j < matrix_2->cols; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < matrix_2->rows; k++) {
                rslt[i][j] += matrix_1->data[i][k] * matrix_2->data[k][j];
            }

            cout << rslt[i][j] << " ";
        }

        cout << endl;
    }
}
