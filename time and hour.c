#include<stdio.h>
void main()
{
int tot_mins,hrs,min;
printf("\nEnter the time mins :");
scanf("%d",&tot_mins);
hrs=tot_mins/60;
min=tot_mins%60;
printf("\n%d:%d",hrs,min);
}
