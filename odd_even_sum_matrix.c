/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
14. Input a matrix of order m x n. Print the sum of all the odd elements present in each
row and all the odd elements present in each column.
*/
#include<stdio.h>
void main()
{
    int a[10][10],m,n,row=0,col=0,i,j;
    printf("enter array number of rows\n");
    scanf("%d",&m);
    printf("enter array number of columns\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            if(a[i][j]%2!=0)
                col+=a[i][j];
        }
        printf("sum of column %d : %d\n",j+1,col);
        col=0;
    }
    for(i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(a[i][j]%2!=0)
                row+=a[i][j];
        }
        printf("sum of row %d : %d\n",i+1,row);
        row=0;
    }
}