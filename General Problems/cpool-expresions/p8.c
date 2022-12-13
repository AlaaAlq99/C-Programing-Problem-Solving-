#include <stdio.h>
void main(void){
  float s1,s2,s3,s4,s5;
  float x,y;
  printf ("Enter the mark of subject 1 : ");
  scanf("%f",&s1);
  printf ("Enter the mark of subject 2 : ");
  scanf("%f",&s2);
  printf ("Enter the mark of subject 3 : ");
  scanf("%f",&s3);
  printf ("Enter the mark of subject 4 : ");
  scanf("%f",&s4);
  printf ("Enter the mark of subject 5 : ");
  scanf("%f",&s5);
  x=s1+s2+s3+s4+s5;
  y=x/5;
  printf("Total marks is : %f",x);
  printf("\nTotal average is : %f %",y);
  printf("\nTotal presentage is : %f %",y);
}