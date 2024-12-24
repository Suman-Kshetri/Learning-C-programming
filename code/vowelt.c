#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char chr,ch;
    printf("Enter the letter:\n");
    scanf("%c",&chr);
    ch=tolower(chr);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("Vowel alphabet:");
    }
    else{
        printf("consonant alphabet:");
    }
    return 0;
}
