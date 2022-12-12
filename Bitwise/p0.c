#include <stdio.h>
void main(void){
  int a;
    printf ("Enter the number  :");
    scanf("%d",&a);
   if (a&1)
       printf ("LSB of %d is (1):",a);
   else
	   printf ("LSB of %d is (0):",a);
}