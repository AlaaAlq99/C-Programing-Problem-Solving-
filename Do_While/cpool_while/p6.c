#include <stdio.h>
void main (void){
	int num,rev=0;
	printf("print Number: ");
	scanf("%d",&num);
	printf("reverse num is: ");
    while(num != 0)
    {
		rev=num%10;
		printf("%d");
		num=num/10;
	}
}