#include<stdio.h>

int main()
{
    int num,i;
    printf("Enter Number: ");
    scanf("%d",&num);

    for(i=num; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
