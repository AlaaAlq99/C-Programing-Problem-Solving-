#include <stdio.h>
void main (void){
	int num, i,sum=0;
    printf("Enter any Number: ");
    scanf("%d",&num);	
    for(i=1; i <= num; i++){
		printf ("%d+1/",i);
	    sum=sum+i;
      }
	printf ("\nsum =1/%d",sum);
}
