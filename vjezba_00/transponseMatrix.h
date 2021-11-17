using namespace std;

void transpose_matrix(Matrix* matrix)
{

    float tr_matrix[matrix->cols][matrix->rows];
   for (int i = 0; i < matrix->rows; ++i)
      for (int j = 0; j < matrix->cols; ++j) {
         tr_matrix[j][i] = matrix->data[i][j];
      }


   cout << "\nTransponsed matrix is: " << endl;
   for (int i = 0; i < matrix->cols; ++i)
      for (int j = 0; j < matrix->rows; ++j) {
         cout << " " << tr_matrix[i][j];
         if (j == matrix->rows - 1)
            cout << endl << endl;
      }
}
