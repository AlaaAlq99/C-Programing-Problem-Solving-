#include <stdio.h>
void main (void){
	int Multi=0,n;
		printf("Input number :");
		scanf("%d",&n);
		for (int i=1;i<=12;i++){
			  Multi=n*i;
		      printf("Num%d * %d = %d\n",n,i,Multi);
		}		
}