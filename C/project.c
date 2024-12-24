#include<stdio.h>
#include<stdlib.h>

struct Trade{
    int id;
    char stockname[20];
    int price;
    int quantity;

};
void addTrade(FILE *tptr)
{
    struct Trade t;
    printf("Enter the id");
    scanf("%d",&t.id);
    printf("Enter the stockname");
    scanf("%s",&t.stockname);
    printf("Enter the price");
    scanf("%f",&t.price);
    printf("Enter the quantity");
    scanf("%d",&t.quantity);
    fwrite(&t,sizeof(t),1,tptr);
    printf("Trade added\n");

}

void display(FILE* tptr)
{
    struct trade t;
    printf("Your trade are:\n");
    while(fread(&t,sizeof(t),1,tptr)!=0)
    {
        printf("\nId: %d\n",t.id);
        printf("stockname: %s\n",t.stockname);
        printf("")

    }
}
int main()
{
    FILE *tptr; //Pointer for file handling
    tptr=fopen("trade.bin","ab+"); //append-read and write; binary format
    if(tptr=NULL)
    {
        printf("connot open the file:");
        exit(0);

    }
    int choice;
    do
    {
        printf("---Trade--Management----System");
        printf("1.Add trade\n 2.Display Trade \n 3.Search Trade \n 4.Exit Trade");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case '1':
            addTrade()
        }
    } while ();
    
}