#include <stdio.h>
void main() 
{
	int n,a[10],i,count=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<n,j<n;i++,j++)
    {
        if(a[i]>a[j])
        {
            count=0;
            break;
        }
        else
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("yes...sorted order");
    }
    else
    {
        printf("no");
    }
	return 0;
}
