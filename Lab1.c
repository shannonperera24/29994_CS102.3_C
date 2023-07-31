#include <stdio.h>
#include <stdlib.h>

int main()
{
        //1.
        printf("Shannon Perera\n");
        printf("Horizon College International\n");

        printf("\n");

        //2.
        printf("*\n");
        printf("**\n");
        printf("***\n");
        printf("****\n");
        printf("*****\n");

        printf("\n");

        //3.
        printf("Shannon Perera\n23.1\n19\n");

        printf("\n");

        //4.
        printf("*\n**\n***\n****\n*****\n");

        printf("\n");

        //5.
        //i.
        //*
        //**
        //***
        //****
        //*****
        //ii. *    **    ***    ****    *****
        //iii. *************** (with sound effect)

        //6. // are used for comments. These are for the user's reference and are ignored by the compiler.

        //7.
        char name;
        int byear,age;
        printf("Enter the first letter of your name: ");
        scanf("%c",&name);
        printf("Enter your birth year: ");
        scanf("%d",&byear);
        age=2023-byear;
        printf("Name=%c\nAge=%d\n",name,age);

        printf("\n");

        //8.
        int input_1;
        printf("Enter a number: ");
        scanf("%d",&input_1);
        printf("%d",input_1);
}
