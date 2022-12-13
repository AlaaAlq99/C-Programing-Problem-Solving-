#include <stdio.h>
#include <math.h>
void main(void){
  int x,y,z;
  printf ("Enter the number 1 : ");
  scanf("%d",&x);
  printf ("Enter the number 2 : ");
  scanf("%d",&y);
  z= pow (x,y);
  printf ("%d ^ %d = %d",x,y,z);
}