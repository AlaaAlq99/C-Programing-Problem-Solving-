#include <stdio.h>
void main (void){
	int max,a,b,c;
		printf("Please Enter Numbers :");
		scanf("%d%d%d",&a,&b,&c);
		if (a>b && a>c)
			printf("The Max Num is = %d",a);
		if (b>a && b>c)
			printf("The Max Num is = %d",b);
		if (c>a && c>b)
			printf("The Max Num is = %d",c);
}