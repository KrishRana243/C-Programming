/*Structures Pointers & Functions*/

#include <stdio.h>
#include <stdlib.h>

void readItem(struct item *i);
void printItem(struct item *i);

struct item
{
    char *itemName;
    int qty;
    float price;
    float amount;
};

int main(){
    struct item itm;
    struct item *pItem;

    pItem = &itm;
    pItem ->itemName = (char *)malloc(30 * sizeof(char));

    if(pItem == NULL)
        exit(-1); 
        
    //read item    
    readItem(pItem);

    //print item
    printItem(pItem);

    free(pItem ->itemName);

}

void readItem(struct item *i)
{
    printf("Enter the product name: ");
    scanf("%s",i ->itemName);

    printf("\nEnter price: ");
    scanf("%f",&i ->price);

    printf("\nEnter Quantity: ");
    scanf("%d",&i->qty);

    i->amount = (float)i-> qty * i->price;
}

void printItem(struct item *i)
{
    printf("\nName: %s",i ->itemName);
    printf("\nPrice: %f",i ->price);
    printf("\nQuantity: %d",i->qty);
    printf("\nTotal Amount: %.2f",i->amount);
}