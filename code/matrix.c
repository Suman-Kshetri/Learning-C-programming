#include<stdio.h>
#include<conio.h>

int main()
{
    int mat1[3][3],mat2[3][3],sum[3][3];
    int i,j;
    printf("Enter the first matrix:\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         scanf("%d",&mat1[i][j]);
     }
    }
    printf("\nThe first matrix is:\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         printf("%d\t",mat1[i][j]);
     }
     printf("\n");
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         scanf("%d",&mat2[i][j]);
     }
    }
     printf("\nThe second matrix is:\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         printf("%d\t",mat2[i][j]);
     }
     printf("\n");
    }

    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         sum[i][j]=mat1[i][j]+mat2[i][j];
     }
    }
     printf("\nThe sum of matrix is:\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         printf("%d\t",sum[i][j]);
     }
     printf("\n");
    }
    return 0;

}
