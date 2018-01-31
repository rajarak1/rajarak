#include <stdio.h>
using namespace std;
int isNumericString(unsigned char *num)
{
	int i=0;
 while (*(num+i)) 
 {
   if (*(num+i) >= '0' && *(num+i) <= '9')
    i++;
   else
   return 0;
    }
 }
