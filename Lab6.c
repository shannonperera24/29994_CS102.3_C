#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.
    int n,fac=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
        fac=1;
    else
        while(n>0)
        {
            fac=fac*n;
            n--;
        }
    printf("Factorial: %d",fac);

    printf("\n\n");

    //2.
    int x,sum=0,remainder=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x>0)
    {
        remainder=x%10;
        sum=sum+remainder;
        x=x/10;
    }
    printf("Sum of all digits: %d",sum);
}
