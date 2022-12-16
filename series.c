/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: Write a program to print the following series:
                   0 3 8 15 24 35 48 .... upto n term.
*/
#include<stdio.h>
void main()
{
    int n,i,k=0;
    printf("enter the range");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",k);
        k+=2*i+1;
    }
}