#include <stdio.h>
#include <stdlib.h>

//2.
void SumAndDifference(int x,int y)
{
    printf("\nSum=%d",x+y);
    printf("\nDifference=%d",x-y);
}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    SumAndDifference(x,y);
    return 0;
}
