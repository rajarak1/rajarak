 # include<stdio.h>
       void main()
       {
           long n,rev,t;
           int r;
           clrscr();
           printf("Enter number : ");
           scanf("%ld",&n);
           t=n;
           rev=0;
           while(t>0)
           {
               r=t%10;
               rev=(rev*10)+r;
               t=t/10;
           }
           if(n==rev)
               printf("Number is palindrom");
           else
               printf("Number is not palindrom");
           getch();
       }
