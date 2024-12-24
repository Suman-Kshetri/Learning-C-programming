#include<stdio.h>
int main()
{
    int i,j,space;
    char s[]="NEPAL";
    for(i=0;i<5;i++)
    {

        for(space=1;space<=(5-i);space++)
        {
            putchar(' ');
        }
        for(j=1;j<=(2*i+1);j++)
        {
            if(i%2==0)
                putchar(s[i]);
            else putchar(tolower(s[i]));
        }
        putchar('\n');
    }



return 0;
}
