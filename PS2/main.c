/*Write a C program to get the 3 X 3 matrix as input and calculate the sum of the
elements. Display the sum along with the matrix.
*/

#include <stdio.h>

int main() {
    int mat[3][3];
    int sum = 0;
    //Reading the user inputs for the matrix elements
    for (int n = 0; n <= 2; n++) {
        for (int i = 0; i <=2 ; i++) {
            printf("Enter element A[%d][%d]: ", n+1, i+1);
            scanf("%d", &mat[n][i]);
        }
    }

    printf("The sum of the matrix elements is:\n");

    for (int g = 0; g <= 2; g++) {
        for (int h = 0; h <=2 ; h++) {
            sum = sum + mat[g][h];
        }

    }
    printf("%d", sum);
    printf("\n");

    printf("The matrix is: \n");
    for (int k = 0; k <= 2; k++) {
        for (int p = 0; p <=2 ; p++) {
            printf("%d ", mat[k][p]);
        }
        printf("\n");
    }

}
