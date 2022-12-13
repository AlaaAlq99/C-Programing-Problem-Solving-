#include <stdio.h>
void main (void){
	int num1,num2, i,j,s=1 ;
    printf("Enter Number of Rows: ");
    scanf("%d",&num1);	
	printf("Enter Number of Colums: ");
    scanf("%d",&num2);
    for(i=1; i <= num1; i++){
		for(j=1; j <= num2 ; j++){
	    printf("%d ",s++);
      }
	  printf("\n");
	}
}
