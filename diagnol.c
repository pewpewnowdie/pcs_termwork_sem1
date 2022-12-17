/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
15. Input a matrix of order m x n and print the square of elements in principal diagonal
and cubes of secondary diagonal.

*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a[10][10],i,j,n,p;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("principal diagnol squares : \n");
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i==j)
            {
                p=pow(a[i][j],2);
                printf("%d\n",p);
            }
        }
    }
    printf("\n");
    printf("secondary diagnol squares : \n");
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i+j==n-1)
            {
                p=pow(a[i][j],3);
                printf("%d\n",p);
            }
        }
    }
    printf("\n");
}