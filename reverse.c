/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F

Problem Statement:Write a program to input n integer numbers from user and print reverse of each number 
*/
#include<stdio.h>
int rev(int);
void main()
{
	int a[50],i,r,n;
	printf("enter the integer count");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter an integer");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		r=rev(a[i]);
		printf("%d\n",r);
	}
}
int rev(int n)
{
	int res=0;
	while(n!=0)
	{
		res=res*10+n%10;
		n/=10;
	}
	return res;
}
