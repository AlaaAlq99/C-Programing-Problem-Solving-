#include <stdio.h>
void main (void){
	int num,power, result=1,i=1 ;
    printf("Enter a Number: ");
    scanf("%d",&num);	
	printf("Enter Number power: ");
    scanf("%d",&power);
    while(i<=power){
		result=result*num;
		i++;   
	}
	printf("Result is = %d ",result);
}
