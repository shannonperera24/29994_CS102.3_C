#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.
    int arr[10];
    int i,max,min,tot=0;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter element %d to the array: ",i+1);
        scanf("%d",&arr[i]);
        tot=tot+arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    avg=tot/10;
    printf("The minimum value is %d\nThe maximum value is %d",min,max);
    printf("\nThe average is %.2f\n",avg);
    for(i=9;i>0;i--)
    {
        printf("%d\t",arr[i]);
    }
}
