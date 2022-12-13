#include <stdio.h>
void main (void){
	int num, i;
    printf("Enter Number: ");
    scanf("%d",&num);
	printf("factors are :");	
    for(i=1; i <= num; i++)
    {
		if(num%i ==0)
		printf("%d ",i);	
    }	
}