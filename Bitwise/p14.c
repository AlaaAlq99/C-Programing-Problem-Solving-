#include <stdio.h>
void main (void){
    int num;	
	printf("Enter any Number : ");
    scanf ("%d",&num);
	if (num & 1)
		printf ("Num %d is Odd \n",num);
	else
		printf ("Num %d is Even \n",num);
}