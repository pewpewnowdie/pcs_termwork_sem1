/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
18. Write a user defined code to input 10 elements in an array (all distinct). Pass this array to the function 
    and print the sum of first three smallest and first three largest elements present in the array.
*/
#include<stdio.h>
void find(int[]);
void main()
{
    int i,a[10],x,n;
    printf("enter array length");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element");
    sort(a,n,x);
}
void find(int a[],int n,int x)
{
    int i,j,temp,s,l;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if(a[i]==x)
            {
                s=a[i-1];
                l=a[i-1];
                break;
             }
    }
    printf("closest smaller : %d\n",s);
    printf("closest greater : %d\n",l);
}
