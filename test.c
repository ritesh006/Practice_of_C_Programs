#include <stdio.h>

//int prime_factor();
int main()
{
    int prime,i,ans,count=0;
    printf("Enter any integer: ");
    scanf("%d",&prime);

    for (i=1;  i<=prime; i++)
    {
        ans = prime%i;
        printf("%d  %d\n",ans,i);

        if (ans==0)
        {
            count++;
        }
    }
        printf("count is  %d\n",count);

        if(count==2)
        {
            printf("Your Number is prime");
        }
        else
        {
            printf("Your Number is Not prime");
        }


    return 0;
}
