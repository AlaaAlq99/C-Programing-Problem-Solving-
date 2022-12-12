#include <stdio.h>
void main (void){
	float num,sum=0;
	     do{
			printf("Enter Num: ");
         	scanf("%f",&num);
		    sum=sum+num;
		}
		while (num != 0);
		printf("Sum= %f",sum);
}