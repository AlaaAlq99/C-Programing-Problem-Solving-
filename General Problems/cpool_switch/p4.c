#include <stdio.h>
void main (void){
    int num;	
	printf("Enter num :");
    scanf ("%d",&num);
	switch (num%2){
		case 0 :
		printf ("num is even\n");
		break;
		default:
		printf ("num is odd\n");
		
	}
}