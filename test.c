#include<stdio.h>

float circle(float, float);       //declare funtion prototype
int main()
{
    float rad,dia;                          // initialise variable
    printf("Enter Radious of Circle: ");    // printing msg for user
    scanf("%f",&rad);                       // taking input from user
    dia=cirle(rad);
    printf("Diameter = %0.2f",dia);
    return 0;
}

float circle(float rad, float dia)             // declare funtion defination 
{
    dia = 3.14*rad*rad;                     // calculating diameter
    return dia;                             // return value of diameter
}