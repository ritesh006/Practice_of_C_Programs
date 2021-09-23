/*(8) Write a C program to find sum of all odd numbers between 1 to n.*/

#include<stdio.h>

int main()
{
    int num,i,j,sum=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        j=i%2;

        if(j==!0)
        {
            printf("%d\n", i);
            sum=sum+i;
        }
    }

    printf("Sum of All Even Number Form 1 to %d is: %d\n",num,sum);
    return 0;
}
