/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
1. Write a Program to find roots of a quadratic equation, equation is of form (ax^2+bx+c=0).
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float d,r1,r2;
    printf("enter coefficients a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        printf("roots:\n%f,%f",r1,r2);
    }
    
}
