#include <stdio.h>
void main (void){
    float customer_num , consume_units,rate_charge;	
	printf("Enter the customer number :");
    scanf ("%f",&customer_num);
	printf ("Enter the consume of Units : \n");
	scanf ("%f",&consume_units);
	if (consume_units>=0 && consume_units<=200){
		rate_charge=consume_units*0.5;
		printf ("Charge is = : %f",rate_charge);
	}
	else if (consume_units>=201 && consume_units<=400){
		rate_charge=100+ 0.65 * (consume_units-200);
		printf ("Charge is = : %f",rate_charge);	
	}
	else if (consume_units>=401 && consume_units<=600){
	    rate_charge=230+ 0.8 * (consume_units-400);
		printf ("Charge is = : %f",rate_charge);	
	}
	else if (consume_units>=601){
		rate_charge=390+ 1 * (consume_units-600);
		printf ("Charge is = : %f",rate_charge);
	}
}