/*TYPES OF POINTER
1. void pointer
2. null pointer
3. double pointer
4. bad pointer

DYNAMIC MEMORY ALLOCATION(DMA)
Process og allocating and freeing memory at run time

1. malloc() function:
ptr=(datatype*)malloc(size of block);

2. calloc()function
ptr=(datatype*)calloc(no of block, size of block);

3. realloc()function
4..........



*/

//swap variables
#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=5,b=6;
    printf("Before swapping:");
    printf("\n a=%d\t b=%d",a,b);

    swap(&a,&b);
    printf("\nAfter swapping:");
    printf("\n a= %d\tb=%d",a,b);

    return 0;
}