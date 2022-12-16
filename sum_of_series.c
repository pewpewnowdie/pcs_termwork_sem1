/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
9. Write a program to find the sum of the following series:
                   1+1/3!+1/5!+1/7!+......1/n!
*/
#include<stdio.h>
void main()
{
    int i,n,f=1;
    float s=1.0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=3;i<=n;i+=2)
    {
        f=f*(i-1)*i;
        s+=1.0/f;
    }
    printf("sum : %f",s);
}
