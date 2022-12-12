#include <stdio.h>
void main (void){
	int i=1,j=1;
	 printf("Multiplication Table: \n");
	 
		do{
         	for(i=1;i<=12;i++){
			printf("%d",i*j);
			printf(" ");
			}
		j++;
		printf("\n");
		}
		while (j<=12);
}

