/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
3. Write a C program to find factors of a number and check whether number is perfect or not.
*/
#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("enter a no.");
    scanf("%d",&n);
    printf("factors:\n");
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
            s+=i;
        }
    }
    if(n*2)
        printf("perfect number");
    else
        printf("not a perfect numebr");

}
