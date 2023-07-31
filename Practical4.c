#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.
    int n1,modulus;
    printf("Enter an integer: ");
    scanf("%d",&n1);
    modulus=n1%2;
    switch(modulus)
    {
        case 0:printf("The number is even.");break;
        case 1:printf("The number is odd.");break;
        default:printf("Invalid entry.");
    }

    printf("\n");

    //2.
    int operation,n1,n2;
    printf("1: Addition (+)\n2: Subtraction (-)\n3: Division (/)\n4: Multiplication (*)\n\nPlease
    select an operation number: ");
    scanf("%d",&operation);
    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);
    switch(operation)
    {
        case 1:printf("\nAnswer: %d",n1+n2);break;
        case 2:printf("\nAnswer: %d",n1-n2);break;
        case 3:printf("\nAnswer: %d",n1/n2);break;
        case 4:printf("\nAnswer: %d",n1*n2);break;
        default:printf("Invalid entry");
    }

    printf("\n");

    //3.
    int operation,radius;
    float pi=3.14159;
    printf("1: Circumference\n2: Area\n3: Volume\n\nPlease select an operation number: ");
    scanf("%d",&operation);
    printf("Enter the radius: ");
    scanf("%d",&radius);
    switch(operation)
    {
        case 1:printf("\nAnswer: %.2f",2*pi*radius);break;
        case 2:printf("\nAnswer: %.2f",pi*radius*radius);break;
        case 3:printf("\nAnswer: %.2f",1.33333*pi*radius*radius*radius);break;
        default:printf("Invalid entry");
    }
}
