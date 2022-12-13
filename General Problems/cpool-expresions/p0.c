#include <stdio.h>
void main(void){
  signed int a,b,c,d;
  float result;
printf ("Enter the number 1 :");
scanf("%d",&a);
printf ("Enter the number 2 :");
scanf("%d",&b);
printf ("Enter the number 3 :");
scanf("%d",&c);
printf ("Enter the number 4 :");
scanf("%d",&d);
if (c-d!=0){
	result = (float)(a+b)/ (float)(c-d);
    printf ("Result is %f \n",result);
}
}

