#include <stdio.h>
void main (void){
    char operator;
    float num1,num2 ;	
	printf("Enter operator  :");
    scanf ("%c",&operator);
	printf ("Enter two numbers : \n");
		scanf ("%f%f",&num1,num2);
	switch (operator){
	    case '+': 
            printf("%f + %f = %f",num1, num2, num1 + num2);
            break;

        case '-':   
            printf("%f - %f = %f",num1, num2, num1 - num2);
            break;

        case '*':    
            printf("%f * %f = %f",num1, num2, num1 * num2);
            break;

        case '/':  
            printf("%f / %f = %f",num1, num2, num1 / num2);
            break;
        default:
            printf("operator is not correct");
    }
}
	