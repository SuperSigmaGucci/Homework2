#include <stdio.h>


int main(){

    int m, n;
    char c;
    printf("Enter size of matrix (MxN):\n");
    printf("M: ");
    scanf(" %d", &m);
    printf("\nN: ");
    scanf(" %d", &n);
    printf("\nEnter the symbol to fill in the matrix: ");
    scanf(" %c", &c);

    printf("E\nMatrix: \n");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}