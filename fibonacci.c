/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F

Problem Statement: Write a user defined function to print fibonacci series. 
*/
#include<stdio.h>
void fib(int);
void main()
{
	int n;
	printf("enter the range\n");
	scanf("%d",&n);
	fib(n);
}
void fib(int n)
{
	int f=0,s=1,t,i;
	printf("%d %d ",f,s);
	for(i=1;i<=n-2;i++)
	{
		t=f+s;
		printf("%d ",t);
		f=s;
		s=t;
	}
}
	
	
