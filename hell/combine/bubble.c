int bubble_sort(int num[],int n)
{
    int temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
}
int input_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int print_array(int num[],int x)
{
  int i;
    for(i=0;i<x;i++)
    {
        printf("%d\t",num[i]);
    }  
}