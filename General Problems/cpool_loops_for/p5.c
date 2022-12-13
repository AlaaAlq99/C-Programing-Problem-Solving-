#include <stdio.h>
void main (void){
	int num, i;
	float sum;
    printf("Enter Number: ");
    scanf("%d",&num);
    for(i=1; i <= num; i++)
    {
		sum += (float)1/i;
		printf("%d_ %f.\n",i,sum);	
    }	
}