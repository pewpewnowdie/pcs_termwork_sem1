/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: Write a program to print following pattern:
                   *        *
                   **      **
                   ***    ***
                   ****  ****
                   **********
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        for(j=4;j>=i;j--)
            printf(" ");
        for(j=4;j>=i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}