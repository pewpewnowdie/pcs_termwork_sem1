/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: Write a C program to find maximum and minimum among n integer number.
*/
#include<stdio.h>
void main()
{
    int a[100],n,i,s,l;
    printf("enter the integer count\n");
    scanf("%d",&n);
    printf("enter the integers");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    l=a[0];
    for (i = 0; i < n; i++)
    {
        if(a[i]<s)
            s=a[i];
        if(a[i]>l)
            l=a[i];
    }
    printf("maximum : %d\nminimum : %d",l,s);
}