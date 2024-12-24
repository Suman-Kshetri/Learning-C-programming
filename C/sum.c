#include<stdio.h>

int main()
{
    int mat1[3][3], sum[3][3];
    int i,j;
    printf("Enter the first matric elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The first matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            if(i==j)
            {
            sum[i][j]=mat[i][j]+mat[i][j];
            }
        }
        printf("\n");
    }
    return 0;
}