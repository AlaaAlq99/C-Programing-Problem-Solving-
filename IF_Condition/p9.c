#include <stdio.h>
void main (void){
    int a,b,c;   //a,b,c is tringle sides
	printf("Enter three sides of tringle :");
    scanf ("%d%d%d",&a,&b,&c);
	if (a==b && b==c && c==a)
		printf("tringle is equilateral");
	else if (a==b || b==c || c==a)
		printf("tringle is isosceles");
	else
		printf("tringle is scalene");	
}