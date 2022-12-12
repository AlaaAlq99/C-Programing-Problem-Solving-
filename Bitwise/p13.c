#include <stdio.h>
void main (void){
    int num1 , num2;	
	printf("Enter num 1 : ");
    scanf ("%d",&num1);
	printf("Enter num 2 : ");
    scanf ("%d",&num2);
	num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
	printf("Number 1 after swapping is : %d \n",num1);
	printf("Number 2 after swapping is : %d \n",num2);
}
	