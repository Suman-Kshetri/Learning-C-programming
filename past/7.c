/*Write a C program that uses pointer
to read mxn matrix from user. Pass itto function that find the transpose of the matrix*/
#include<stdio.h>
#define max 20

int read_matrix(int m, int n,int (*mat)[max])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(mat+i)+j));
        }
    }
}
int print(int m,int n,int (*mat)[max])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",(*(*(mat+i)+j)));
        }
        printf("\n");
    }
}
int transpose_matrix(int m,int n, int (*matrix)[max],int (*transpose)[max])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            *(*(transpose+i)+j)=*(*(matrix+j)+i);
        }
    }
}
int main()
{
    int matrix[max][max],transpose[max][max];
    int m,n;
    printf("Enter the dimension of matrix(mxn):");
    scanf("%d%d",&m,&n);
    printf("The elements of matrix are:\n");
    read_matrix(m,n,matrix);
    printf("The matrix is:\n");
    print(m,n,matrix);
    transpose_matrix(m,n,matrix,transpose);
    printf("The transpose of matrix is:\n");
    print(n,m,transpose);
    
    return 0;
}