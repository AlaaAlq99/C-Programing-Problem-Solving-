#include <stdio.h>
void main (void){
	int num,i=1,sum=0,F_Digit,L_Digit;
	printf("print Number: ");
	scanf("%d",&num);
	L_Digit=num%10;
	sum = F_Digit+L_Digit;
    F_Digit = num;
    while(num >= 10)
    {
        num = num / 10;
    }
    F_Digit = num;
	printf("Sum of first & Last Digit are : %d",sum);

}