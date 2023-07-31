#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.
    int num1,num2,maximum;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        maximum=num1;
    else
        maximum=num2;
    printf("The highest number is %d\n",maximum);

    printf("\n");

    //2.
    int n1,n2,n3,max,min;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    if(n2>max)
        max=n2;
    if(n3>max)
        max=n3;
    printf("The largest value is %d\n",max);
    min=n1;
    if(n2<min)
        min=n2;
    if(n3<min)
        min=n3;
    printf("The smallest value is %d\n",min);

    printf("\n");

    //3.
    float bsal,nsal;
    char empname[25];
    printf("Enter employee name: ");
    scanf("%s",&empname);
    printf("Enter basic salary: ");
    scanf("%f",&bsal);
    if(bsal<5000)
        nsal=bsal*1.05;
    else if(bsal<10000)
        nsal=bsal*1.10;
    else
        nsal=bsal*1.15;
    printf("Employee name: %s\nNew salary: %.2f",empname,nsal);

    printf("\n");

    //4.
    float radius,diameter,circumference,area,pi;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    pi=3.14159;
    printf("\nDiameter of the circle: %.2f",radius*2);
    printf("\nCircumference of the circle: %.2f",2*pi*radius);
    printf("\nArea of the circle: %.2f",pi*radius*radius);

    printf("\n");

    //5.
    int n1,n2,modulus;
    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);
    modulus=n1%n2;
    if(modulus==0)
        printf("The first number is a multiple of the second.");
    else
        printf("The first number is not a multiple of the second.");
}
