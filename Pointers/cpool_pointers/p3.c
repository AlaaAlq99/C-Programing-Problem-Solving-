#include <stdio.h>
void main( void ){
	int a,b,c,*x,*y,*z;
	x=&a;
	y=&b;
	z=&c;
	printf("Enter a,b,c is :\n");
	scanf("%d%d%d",&a,&b,&c);
	x=&b;
	y=&c;
	z=&a;
	printf("a=%d\n",*x);
	printf("b=%d\n",*y);
	printf("c=%d\n",*z);
}