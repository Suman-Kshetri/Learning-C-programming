#include<stdio.h>
#include<conio.h>

void main()
{
 /* Storing same string in two different variable in required format 
    is simple hack for question to avoid too many if-else statement 
 */
 char string1[] = "PuLcHoWk";
 char string2[] = "PULCHOWK";
 int i,j, length;

 /* Pattern */
 for(i=0;i< 8;i++)
 {
  for(j=0;j<=i;j++)
  {
   if(i==3||i==5||i==7)
   {
    putchar(string2[j]);
   }
   else
   {
    putchar(string1[j]);
   }
  }
  putchar('\n');
 }
 getch();
}