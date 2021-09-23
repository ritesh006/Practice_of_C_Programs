/*(5) Write a C program to print all odd number between 1 to 100.*/

#include<stdio.h>

int main()
{
    int num,i,j;

    for(i=1; i<=100; i++)
    {
        j=i%2;
        if(j==!0)
        printf("%d\n", i);
    }

    return 0;
}
