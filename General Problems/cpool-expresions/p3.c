#include <stdio.h>
void main(void){
  int x,y,z;
  printf ("Enter the number 1:");
  scanf("%d",&x);
  printf ("Enter the number 2:");
  scanf("%d",&y);
  printf ("SWAPPING :\n");
  z=x;
  x=y;
  y=z;
  printf ("x= %d:",x);
  printf ("\ny= %d:",y);
}
  