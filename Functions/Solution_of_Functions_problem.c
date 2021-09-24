/* (1) Any year intered through the keyboard. Write a function to 
determine whether the year is leap year or not. using function*/

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



/*(2) Write a C program to find cube of any number using function.*/ 

#include <stdio.h>
int cube();         // prototype the function
int main()          // initialize the main 
{
    int num,ans;      // variable declaration 
    printf("Enter Number: ");    // printing order for user
    scanf("%d",&num);              // taking int value from user 

    ans = cube(num);                // calling the function cube    
    
    printf("your cube of %d is: %d",num,ans);  // printing the output 
}
int cube (int a, int b)
{
    b = a*a*a;    // calculation for cube 
    return b;     // return int value to the main in called function 
}



/* (3) Write a C program to find diameter, circumference and area of circle
  using functions. */


#include<stdio.h>

double getDiameter();           //declare function of Diameter prototype
double getCicumference();       // Declare Function of Circumference Prototype
double getArea();
int main()
{
    double rad,dia,circum,area;             // initialize variable
    printf("Enter Radious of Circle: ");    // printing Message for User
    scanf("%lf",&rad);                      // taking input from User
    dia=getDiameter(rad);                   // Calling Function for Diameter
    circum=getCicumference(rad);            // Calling Function for Circumference
    area = getArea(rad);                    // Calling Function for Area
    printf("Diameter = %0.2lf\n",dia);      // Printing Diameter
    printf("Circumference = %0.2lf\n",circum);// Printing Circumference
    printf("Area = %0.2lf",area);            // Printing Area

    return 0;
}

double getDiameter(double rad, double dia)    // declare function definition
{
     dia = 3.14*rad*rad;                     // calculating diameter

     return dia;                             // return value of diameter

}

double getCicumference(double rad, double circum)  // declare function definition
{

    circum = 2 * 3.14 * rad;                // calculating circumference

    return circum;                          // return value of circumference
}

double getArea(double rad, double area)  // declare function definition
{

     area = 3.14 * rad * rad;                // calculating area

     return area;                          // return value of area  
}
