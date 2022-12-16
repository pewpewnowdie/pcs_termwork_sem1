/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
13. Write a code to remove duplicate elements in an array using function
*/
#include<stdio.h>
void pop(int[],int);
void main()
{
    int i,j,n,a[20];
    printf("enter array length\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    pop(a,n);
}
void pop(int a[], int n)
{
    int i,j,k;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[j]==a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }
    printf("array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
}