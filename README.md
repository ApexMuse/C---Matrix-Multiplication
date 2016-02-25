# C---Matrix-Multiplication
A C program that performs matrix multiplication


Consider the following variable declarations:

double **m1, **m2, **mr;
int m1_rows, m1_cols, m2_rows, m2_cols, mr_rows, mr_cols;

Write code that uses these variables to perform a matrix multiplication.  The program should prompt the user for the sizes of the two matrices to be multiplied (from these, it can calculate the size of the result matrix).  It should then dynamically allocate memory for the matrices and prompt the user for values for all entries in the matrix.  Finally, the program should perform the matrix multiplication and report the result.

Example: if the first matrix is 1 x 3 with values [1 7 4] and the second matrix is 3 x 2 with values [1 3], [1 9] and [6 2] in each row, then the result matrix should be 1 x 2 with values [32 74].
