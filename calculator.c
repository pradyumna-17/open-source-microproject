#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("****Simple Calculator****\n");
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("**Enter your choice**\n");
    printf("1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. division \n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("Addition is %d",a+b);
        break;
    case 2:
        printf("Subtraction is %d",a-b);
        break;
    case 3:
        printf("Multiplication is %d",a*b);
        break;
    case 4:
        printf("Division is %d",a/b);
        break;

    default:
        printf("Please enter valid choice");
        break;
    }
    getch();
}