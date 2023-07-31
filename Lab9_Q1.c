#include <stdio.h>
#include <stdlib.h>

//1.
void findSumAndDifference()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a+b);
    printf("Difference=%d\n",a-b);
}
int main()
{
    findSumAndDifference();
    return 0;
}
