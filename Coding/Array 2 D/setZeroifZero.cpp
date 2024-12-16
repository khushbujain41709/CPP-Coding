// Leetcode - 73
/*
is_col is a flag to indicate if the first column needs to be zeroed out.
1)Marking Rows and Columns:
2)The code iterates through each element of the matrix.
3)If an element is zero, it marks the corresponding row and column by setting the first element of the row and column to zero.
4)Setting Zeros:
5)Using the marks in the first row and column, the code sets zeros in the corresponding elements of the matrix, except for the first row and column.
6)Special Handling for First Row and Column:
If the first element (matrix[0][0]) was originally zero, it sets the entire first row to zero.
If is_col is true (indicating the first column needs to be zeroed out), it sets the entire first column to zero.
*/
#include <iostream>
#include <vector>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool is_col = false;
    // Mark the first row and first column if any element is 0
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) {
            is_col = true;  // first column has a zero
        }
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    // Set the zeros based on the marks in the first row and first column
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    // Set the first row and first column to zeros if necessary
    if (matrix[0][0] == 0) {
        for (int j = 0; j < cols; j++) {
            matrix[0][j] = 0;
        }
    }
    if (is_col){
        for (int i = 0; i < rows; i++) {
            matrix[i][0] = 0;
        }
    }
}
int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    setZeroes(matrix);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
