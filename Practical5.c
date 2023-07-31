#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days in the month: 31");break;
        case 2:
            printf("Number of days in the month: 28");break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days in the month: 30");break;
        default:printf("Invalid entry");
    }

    printf("\n\n");

    //2.
    //WHILE
    {
        int x=0;
        while(x<=100)
        {
            printf("%d ",x);
            x++;
        }
    }
    //DO WHILE
    {
        int x=0;
        do
        {
            printf("%d ",x);
            x++;
        }while(x<=100);
    }
    //FOR
    {
        int x;
        for(x=0;x<=100;x++)
        {
            printf("%d ",x);
        }
    }

    printf("\n\n");

    //3.
    int x,n=1,total=0;
    float avg;
    while(n<=10)
    {
        printf("Enter mark %d: ",n);
        n++;
        scanf("%d",&x);
        total=total+x;
    }
    avg=total/10;
    if(avg<50)
        printf("Fail!");
    else
        printf("Pass!");
}
