/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
18. Write a user defined code to input 10 elements in an array (all distinct). Pass this array to the function 
    and print the sum of first three smallest and first three largest elements present in the array.
*/
#include<stdio.h>
void sum(int[]);
void main()
{
    int i,a[10],res;
    printf("enter elements in array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a);
}
void sum(int a[])
{
    int i,j,ss=0,sl=0,temp;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8 - i; j++)
        {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    ss=a[0]+a[1]+a[2];
    sl=a[9]+a[8]+a[7];
    printf("sum of three smallest elements : %d\n",ss);
    printf("sum of three largest elements : %d\n",sl);
}