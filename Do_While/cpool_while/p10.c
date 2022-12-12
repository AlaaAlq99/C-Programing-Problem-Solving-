#include <stdio.h>
void main (void){
	int num,count=1;
	printf("print Number: ");
	scanf("%d",&num);
    while(num >= 10)
    {
		num=num/10;
		count++;
	}
	printf("Number of Dgits is : %d",count);
}