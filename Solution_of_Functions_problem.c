/* (1) Any year intered through the keyboard.
Write a function to determine whether the year is leap year or not. using function*/

# include <stdio.h>
int leap(int year);
int main()
{
    int year,ans;
    printf("Enter Year to Know leap Year or Not: ");
    scanf("%d",&year);
    if ((leap(year)))
    {
        printf("Year is Leap Year.");
    }
    else
        printf("Year is Not Leap Year");

    return 0;
}

int leap(int year)
{
    if(year%4==0 || year%400==0 && year%100!=0)
    {
        return 1;
    }
    else
        return 0;
}



/*(2) Write a C program to find cube of any number using function.