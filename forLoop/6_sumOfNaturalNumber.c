/*(6) Write a C program to find sum of all natural numbers between 1 to n.*/

#include<stdio.h>

int main()
{
    int num,i;
    int total=0;
    printf("Enter Number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        printf("%d\n", i);
        total=total+i;
    }
  printf("Sum of Natural Number from 1 to %d is: %d\n",num, total);
    return 0;
}
