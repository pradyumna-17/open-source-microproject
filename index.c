#include<stdio.h>
int main ()
{
    int n, i, ;
    char namec [20]
    float price, quantity, total=0, grand total=0;
    printf("Enter number of items: ");
    scanf("%d", &n);
    for(i=1; i<=n; i==)
    {
        printf("\n Item %d\n",i)
        printf("Enter item name:");
        scanf("%s", name);
        printf("Enter price:");
        scanf("%f", &price );
        printf("Enter quantit:");
        scanf("%f", quantity);
        total= price*quantity;
        printf("Total for %s = %.2f\n",name, total);
        grand Total +=total;
    
    }
    printf("\n=========================")
    printf("\n Grand Total =Rs. %2f", grand total);
    printf("\n=========================");
    return 0;
}



    


