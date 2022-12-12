#include <stdio.h>
void main (void){
	int num,sum=0;
	printf("print Number: ");
	scanf("%d",&num);
    while(num != 0)
    {
		sum = sum+num%10;
		num=num/10;
	}
	printf("Sum of first & Last Digit are : %d",sum);

}