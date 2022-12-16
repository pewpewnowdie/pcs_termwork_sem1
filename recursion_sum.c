/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: Wrtie a program in C to calculate the sum of numbers from 1 to n using recursion.
*/
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("%d",sum(n));
}
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sum(n-1);
}