#include <stdio.h>
#include <conio.h>

void main(){
   int *arr,i,j,tmp,n;
   clrscr();
   printf("Enter how many data you want to sort : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",arr+i);

   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++){
       if( *(arr+i) > *(arr+j)){
      tmp = *(arr+i);
      *(arr+i) = *(arr+j);
      *(arr+j) = tmp;
       }
    }
   }

   printf("\n\nAfter Sort\n");
   for(i=0;i<n;i++)
      printf("%d\n",*(arr+i));

      getch();
}
