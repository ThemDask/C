#include <stdio.h>

//printing int values from a one-dimensional table 
int main()
{
   int table[10];
   int i, j;

   j = 2;
   for(i=0; i<10; i++) 
   {
      table[i] = j;
      j=j+2;
      printf("table[%d] = %d\n", i, j);
   }
   
   return 0;
}
