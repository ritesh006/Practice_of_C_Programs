/*(1) Write a C program to print all natural numbers from 1 to n. - using loop*/

#include<stdio.h>

int main()
{
    int num,i;
    printf("Enter Number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}