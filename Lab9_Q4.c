#include <stdio.h>
#include <stdlib.h>

float findQuotient(int a,int b)
{
    return (float)a/b;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nQuotient=%.2f",findQuotient(a,b));
    return 0;
}
