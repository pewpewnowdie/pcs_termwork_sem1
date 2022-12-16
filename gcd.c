/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
19. Write a recursive code to print gcd of two numbers.
*/
#include<stdio.h>
int gcd(int,int);
void main()
{
    int x,y,ans;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    ans=gcd(x,y);
    printf("%d",ans);
}
int gcd(int x, int y)
{
    if(x==0)
        return y;
    else
        return gcd(y%x,x);
}