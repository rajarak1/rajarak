#include<stdio.h>
void main()
{
int tot_hrs,mins;
printf("\n Enter the time mins :");
scanf("%d",&tot_mins);
hrs=tot_mins/60;
min=tot_mins%60;
printf("\n%d:%d",hrs,min);
}
