/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: Write a program to print all prime numbers between the range m and n.
*/
#include<stdio.h>
void main()
{
    int i,j,m,n,f;
    printf("enter the range");
    scanf("%d%d",&m,&n);
    for (i = m+1; i < n; i++)
    {
        f=0;
        for (j = 1; j <= i; j++)
        {
            if(i%j==0)
            {
                f++;
            }
        }
        if(f==2)
            printf("%d\n",i);
    }
}
