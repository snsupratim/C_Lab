#include<stdio.h>
 
int main() {
   int i, j;
   int count = 1;
 
   for (i = 1; i <= 4; i++) {
      printf("\n");
      for (j = 1; j <= i; j++) {
         printf("%d\t", count);
         count++;
      }
   }
   return(0);
}
