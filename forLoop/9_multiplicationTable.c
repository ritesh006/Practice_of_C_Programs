/*(9) Write a C program to print multiplication table of any number.*/

#include<stdio.h>

int main()
{
    int num,i,sum=0;            // declare variable 
    printf("Enter Number: ");   //message for user
    scanf("%d",&num);           // Taking Inpur From User
    for(i=1; i<=10; i++)        //Excute for loop for 1 to 10 numbers.
    {
        sum=num*i;              // Calculate Num Multiply by i;
        printf("%d  *  %d =  %d\n",num,i, sum); // Printing Calculation

    }
    return 0;
}
