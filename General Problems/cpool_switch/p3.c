#include <stdio.h>
void main (void){
    int num1,num2;	
	printf("Enter num of month :");
    scanf ("%d%d",&num1,&num2);
	switch (num1>num2){
		case 0 :
		printf ("%d is muximum\n",num2);
		break;
		case 1 :
		printf ("%d is muximum\n",num1);
		break;
	}
}