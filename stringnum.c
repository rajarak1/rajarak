#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    int i,j;
    clrscr();
    printf("\n Please Give The STRING OF A : ");
    scanf("%s",a);
    printf("\n Please Give The STRING OF B : ");
    scanf("%s",b);
    strcat(a,b);
    printf("\n Concatenation of a string is %s .",a);
    getch();
}
