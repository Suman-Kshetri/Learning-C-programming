#include<stdio.h>
#define MAX_SIZE 100

int input_matrix(int row, int cols, int (*ptr)[MAX_SIZE])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",*(ptr+i)+j);
        }
    }

}
int print_matrix(int row,int cols,int (*ptr)[MAX_SIZE])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}    
int product_matrix(int row,int cols,int (*ptr1)[MAX_SIZE],int (*ptr2)[MAX_SIZE],int (*product)[MAX_SIZE])
{
    int i,j,k;
    for(i=0;i<row;i++)
    {
        for(j=0;j<cols;j++)
        {
            *(*(product+i)+j)=0;
            for(k=0;k<row;k++)
            {
                *(*(product+i)+j) += (*(*(ptr1+i)+k))*(*(*(ptr2+k)+j));
            }
        }
    }
}

int main()
{
    int mat1[MAX_SIZE][MAX_SIZE],mat2[MAX_SIZE][MAX_SIZE],product[MAX_SIZE][MAX_SIZE];
    int row,cols;
    printf("Enter the dimension of matrix:");
    scanf("%d%d",&row,&cols);
    printf("Enter the first matrix element:\n");

    input_matrix(row,cols,mat1);
    printf("Enter the second matrix element:\n");
    input_matrix(row,cols,mat2);
    printf("\nThe first matrix is:\n");
    print_matrix(row,cols,mat1);
    printf("\n the second matrix is:\n");
    print_matrix(row,cols,mat2);
    printf("The product of two matrix are:\n");
    product_matrix(row,cols,mat1,mat2,product);
    print_matrix(row,cols,product);

    return 0;
}