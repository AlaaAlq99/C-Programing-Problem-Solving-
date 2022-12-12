#include <stdio.h>
#include <math.h>
void main (void){
    int a,b,c,x1,x;
    scanf ("%d %d %d",&a,&b,&c);
    if (a==0 && b==0)
	     printf ("no solution \n");
    else if (a==0 )
	         printf ("one root is = %d \n",(-c/b));
	else if ((b*b)- (4 *a*c) <0)
		      printf ("no root \n");
    else {
		printf ("two roots \n");
		x1=(-b+pow(((b*b)-(4*a *c)),1/2))/(2*a);
		x=(-b-pow(((b*b)-(4*a*c)),1/2))/(2*a);
		printf ("the first root is %d \n", x1);
		printf ("the second root is %d \n", x);
	}
		


}