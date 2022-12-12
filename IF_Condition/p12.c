#include <stdio.h>
void main (void){
    float units , units_cost , electrisity_bill;	
	printf("Enter units consumed :");
    scanf ("%f",&units);
	if (units <=50)
		units_cost=units*0.5;
	else if (units <=150)
		units_cost=units*0.75;
    else if (units <=250)
		units_cost=units*1.2;
	else if (units >250)
		units_cost=units*1.5;
	electrisity_bill= units_cost + (units_cost *0.2);
	printf("Electrisity Bill is %f\n",electrisity_bill);
}
	