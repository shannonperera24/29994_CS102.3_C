#include <stdio.h>
#include <stdlib.h>

int findProduct(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nProduct=%d",findProduct(a,b));
    return 0;
}
