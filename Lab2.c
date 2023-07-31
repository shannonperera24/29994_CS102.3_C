#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.
    printf("%5d%5d%5d\n",2,4,8);
    printf("%5d%5d%5d\n",3,9,27);
    printf("%5d%5d%5d\n",4,16,64);
    printf("%5d%5d%5d\n",5,25,125);

    printf("\n");

    //2.
    float distance,time,speed;
    printf("Distance traveled: ");
    scanf("%f",&distance);
    printf("Time taken: ");
    scanf("%f",&time);
    speed=distance/time;
    printf("Average speed: %.2fm/s\n",speed);

    printf("\n");

    //3.
    float c,f;
    printf("Temperature in degrees Farenheit: ");
    scanf("%f",&f);
    c=(5.00/9.00)*(f-32.00);
    printf("Temperature in degrees Celsius: %.2f",c);
}
