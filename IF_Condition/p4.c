#include <stdio.h>
#include <math.h>
void main (void){
    int a,b,c,d,e;
    scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printf("the numbers that is divisable by 3 is :\n");
	if (a%3==0)
		printf("%d\n",a);
	if (b%3==0)
		printf("%d\n",b);
	if (c%3==0)
		printf("%d\n",c);
	if (d%3==0)
		printf("%d\n",d);
	if (e%3==0)
		printf("%d\n",e);
}