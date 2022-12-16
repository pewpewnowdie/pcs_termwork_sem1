/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement: 
2. Write a C program to input electricity unit and calculate total electricity bill according to the given condition.
    For first 50 units Rs. 0.50 per unit
    For next 100 units Rs. 0.70 per unit
    For next 100 units Rs. 1.20 per unit
    For unit above 250 Rs. 1.50 per unit
    An additional surcharge of 20% of bill is added.
*/
#include<stdio.h>
void main()
{
    int unit;
    float bill;
    printf("enter units used\n");
    scanf("%d",&unit);
    if(unit<=50)
        bill=unit*0.5;
    else if(unit<=150)
        bill=50*0.5+(unit-50)*0.75;
    else if(unit<=250)
        bill=50*0.5+100*0.75+(unit-150)*1.2;
    else
        bill=50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
    bill*=1.2;
    printf("bill : %f",bill);
}