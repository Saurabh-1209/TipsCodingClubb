#include<stdio.h>
int main(){
    int arr[5][5],trans[5][5],row,col;
    printf("Enter number of rows of the matrix: ");
    scanf("%d",&row);
    printf("Enter number of columns of the matrix: ");
    scanf("%d",&col);
    printf("Input the elements of the matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Enter element at arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The input matrix is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",arr[i][j]);
            if(j==col-1){
                printf("\n");
            }
        }
    }
    printf("\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            trans[j][i]=arr[i][j];
        }
    }
    printf("The Transposed matrix is: \n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ",trans[i][j]);
            if(j==row-1){
                printf("\n");
            }
        }
    }
    return 0;
}