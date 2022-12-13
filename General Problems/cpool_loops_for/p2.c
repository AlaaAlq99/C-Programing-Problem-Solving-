#include <stdio.h>
void main (void){
	float sum=0,n,avr;
		printf("Input 10 numbers \n");
		for (int i=1;i<=10;i++){
		      printf("Num%d is = ",i);
			  scanf("%f",&n);
			  sum=sum+i;
		}
		avr=sum/10;
		printf("\nSum =%f",sum);
		printf("\nAverge =%f",sum/10);
}