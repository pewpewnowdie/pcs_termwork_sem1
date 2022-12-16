/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
12. Input n elements in an array and organize them in descending order using a sorting technique.
*/
#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
    printf("enter the array length\n");
    scanf("%d",&n);
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("array in descending order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
}
        
