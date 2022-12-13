#include <stdio.h>
void main (void){
	int sum=0;
		printf("The first 10 numbers \n");
		for (int i=1;i<=10;i++){
		      printf("%d ",i);
			  sum=sum+i;
		}
		printf("\nSum =%d",sum);
}