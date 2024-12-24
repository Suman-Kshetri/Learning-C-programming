#include<stdio.h>
#define max 100

int input_matrix(int row,int col,int (*ptr)[max])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
}
int print_matrix(int row,int col,int (*ptr)[max])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",(*(*(ptr+i)+j)));
        }
        printf("\n");
    }
}
int product(int row1,int col1,int row2,int col2,int (*mat1)[max],int (*mat2)[max],int (*mtr)[max])
{
    int i,j,k;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            *(*(mtr+i)+j)=0;
            for(k=0;k<col1;k++)
            {
                (*(*(mtr+i)+j))+= (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            }
        }
    }
    
}
int main()
{
    int row1,row2,col1,col2;
    int matrix1[max][max],matrix2[max][max],product_matrix[max][max];
    printf("Enter the dimension of 1st matrix(mxn):");
    scanf("%d%d",&row1,&col1);
    printf("Enter the dimension of 2nd matrix(mxn):");
    scanf("%d%d",&row2,&col2);
    printf("\nEnter element of 1st matrix:\n");
        input_matrix(row1,col1,matrix1);
        printf("\nEnter element of 1st matrix:\n");
        input_matrix(row2,col2,matrix2);
        printf("The 1st matrix is:");
        print_matrix(row1,col1,matrix1);
        printf("\nThe 2nd matrix is:");
        print_matrix(row2,col2,matrix2);
        
        product(row1,col1,row2,col2,matrix1,matrix2,product_matrix);
        
        printf("The product of matrix is:\n");
        print_matrix(col1,row2,product_matrix);
        
        return 0;
}