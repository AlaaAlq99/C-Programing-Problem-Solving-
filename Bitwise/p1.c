#include <stdio.h>
void main(void){
  int a,b,c;
  b=sizeof(int)*8;
    printf ("Enter the number  :");
    scanf("%d",&a);
	c=1<<(b-1);
	if(a&c)
		printf("MSB of %d is  (1)",a);
	else
		printf("MSB of %d is  (0)",a);
}