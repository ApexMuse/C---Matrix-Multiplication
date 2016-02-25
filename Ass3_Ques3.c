#include <stdio.h>
#include <stdlib.h>

double **m1, **m2, **mr;
int m1_rows, m1_cols, m2_rows, m2_cols, mr_rows, mr_cols, i, j, k;

int main(void) {
	
	/* 
	 * Get # of rows and cols for each matrix from the user, then check to make sure the number of 
	 * columns in Matrix 1 is equal to the number of rows in Matrix 2.
	 */
	do {
		printf("Enter the number of rows for Matrix 1: ");
		scanf("%i", &m1_rows);
		printf("Enter the number of columns for Matrix 1: ");
		scanf("%i", &m1_cols);
		printf("Enter the number of rows for Matrix 2: ");
		scanf("%i", &m2_rows);
		printf("Enter the number of columns for Matrix 2: ");
		scanf("%i", &m2_cols);
		if(m1_cols != m2_rows){
			printf("\nThe number of columns in Matrix 1 must equal the number of rows in Matrix 2.\n");
			printf("Please try again.\n\n");
		}
	} while(m1_cols != m2_rows);
	
	// Assign  mr_rows and mr_cols
    mr_rows = m1_rows;
    mr_cols = m2_cols;
	
	// Allocate memory for Matrix 1
    m1 = (double **) calloc(m1_rows, sizeof(double *));
    for (i = 0; i < m1_rows; i++) {
        m1[i] = (double *) calloc(m1_cols, sizeof(double));
    }
    
    // Allocate memory for Matrix 2
    m2 = (double **) calloc(m2_rows, sizeof(double *));
    for (i = 0; i < m2_rows; i++) {
        m2[i] = (double *) calloc(m2_cols, sizeof(double));
    }

    // Allocate memory for Sum Matrix
    mr = (double **) calloc(mr_rows, sizeof(double *));
    for (i = 0; i < mr_rows; i++) {
        mr[i] = (double *) calloc(mr_cols, sizeof(double));
    }
    
    // Get values for Matrix 1
    printf("\n\nEnter your values for Matrix 1...\n\n");
    for (i = 0; i < m1_rows; i++) {
        for (j = 0; j < m1_cols; j++) {
			printf("Value for Row %i Column %i: ", i+1, j+1);
			scanf("%lf", &m1[i][j]);
		}
    }
    
    // Get values for Matrix 2
    printf("\n\nEnter your values for Matrix 2...\n\n");
    for (i = 0; i < m2_rows; i++) {
        for (j = 0; j < m2_cols; j++) {
			printf("Value for Row %i Column %i: ", i+1, j+1);
			scanf("%lf", &m2[i][j]);
		}
    }

    // Perform matrix multiplication
    for (i = 0; i < m1_rows; i++) {
        for (j = 0; j < m2_cols; j++) {
            mr[i][j] = 0;
            for (k = 0; k < m1_cols; k++) {
                mr[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print result
    printf("\n\nRESULT: ");
    for (i = 0; i < mr_rows; i++) {
        for (j = 0; j < mr_cols; j++) {
            printf("%f\t", mr[i][j]);
        }
    }
	
	return 0;
}
