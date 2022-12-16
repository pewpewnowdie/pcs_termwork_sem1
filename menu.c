/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F

Problem Statement:
17. Write a menu driven program using functions that can perform the following tasks on pressing given keys:
1.	Check if a number is odd or even.
2.	Print reverse of a number.
3.	Print sum of series 1+3+5+7.... upto n.
4.	Exit 
*/
#include<stdio.h>
void oddEven(int);
int rev(int);
int series(int);
void main()
{
	int c,n,res;
	do
	{
		printf("*********Menu*********\n1.	Check if a number is odd or even.\n2.	Print reverse of a number.\n");
		printf("3.	Print sum of series 1+3+5+7.... upto n.\n4.	Exit\n");
		scanf("%d",&c);
		switch (c)
		{
			case 1:
				printf("enter a no.\n");
				scanf("%d",&n);
				oddEven(n);
				break;
			case 2:
				printf("enter a no.\n");
				scanf("%d",&n);
				res=rev(n);
				printf("reverse:	%d\n",res);
				break;
			case 3:
				printf("enter a no.\n");
				scanf("%d",&n);
				res=series(n);
				printf("sum of series:	%d\n",res);
				break;
			default:
				c=5;
		}
	}while(c!=5);
}
void oddEven(int n)
{
	if(n==0)
		printf("zero");
	else if(n%2==0)
		printf("even");
	else 
		printf("odd");
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
int series(int n)
{
	int sum=0,i;
	for(i=1;i<=2*n-1;i+=2)
	{
		sum+=i;
	}
	return sum;
}
				

	
