/*
Name:		Kshitij Tyagi
Roll No.:	2021287
Sec: 		F
Problem Statement:
11. Input n characters in an array and replace the characters as per the given instructions:
    1. Replace all capital vowels with symbol $.
    2. Replace all the capital consonant with symbol #.
    3. Replace all small letter vowels with symbol *.
    4. Replace all the small letter consonant with symbol +.
    5. Relace all special symbols with spaces.
    6. Replace all spaces with digit 5.
    7. Replace all digits with @
*/
#include<stdio.h>
void main()
{
    int i,n;
    char a[20];
    printf("enter array length\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf(" %c",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                a[i]='$';
            else
                a[i]='#';
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                a[i]='*';
            else
                a[i]='+';
        }
        else if(a[i]==32)
            a[i]='5';
        else if(a[i]>=48 && a[i]<=57)
            a[i]='@';
        else
            a[i]=' ';
    }
    printf("new array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%c\n",a[i]);
    }
}
