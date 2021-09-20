# include <stdio.h>

int main()
{
    int num,i,ans,j,prime,count=0;

    printf("Enter number: ");
    scanf("%d",&num);

    for (i=1; i<=num; i++)
    {
        ans=num%i;
        if(ans==0)
        {
            j=i;
            //printf("factor is %d\n",i);
        }   
        for (j=2;  j<=i; j++)
            {
                prime= i%j;
                

                if (prime==0)
                {
                    printf("%d  \n",j);
                    
                }
                
            }        
    }
      
       return 0;   
}
    
    
