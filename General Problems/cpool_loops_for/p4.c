#include <stdio.h>
void main (void){
	int num1, num2, i, GCD, LCM;
    printf("Enter two positive integers: ");
    scanf("%d%d",&num1,&num2);
    for(i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            GCD = i;
    }
    LCM = (num1*num2)/GCD;
    printf("The LCM of two numbers %d and %d is %d.", num1, num2,LCM);		
}