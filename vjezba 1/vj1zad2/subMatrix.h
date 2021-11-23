using namespace std;

void sub_matrix(Matrix* matrix_1, Matrix* matrix_2) {
    int rslt[matrix_1->rows][matrix_1->cols];
    for (int i = 0;i<matrix_1->rows;i++ ) {
      for (int j = 0;j < matrix_1->cols;j++ ) {
        rslt[i][j]=matrix_1->data[i][j] - matrix_2->data[i][j];
      }

    }
    cout<<"the sum is: ";
      cout<<endl;
      for(int i = 0; i < matrix_1->rows; ++i)
        for(int j = 0; j < matrix_1->cols; ++j)
        {
            cout << rslt[i][j] << "  ";
            if(j == matrix_1->cols - 1)
            cout << endl;
        }
}
