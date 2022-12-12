#include <stdio.h>
void main (void){
    float basic_salary,HRA,DA; 
    float gross_salary;	
	printf("Enter basic salary :");
    scanf ("%f",&basic_salary);
	if(basic_salary<=10000){
		HRA = (20*basic_salary)/100;
		DA  = (80*basic_salary)/100;
		gross_salary=basic_salary+HRA+DA;
		printf("Gross salary of emplyee is : %f\n",gross_salary);
	}
	else if(basic_salary>=10001 && basic_salary<=20000){
		HRA = (25*basic_salary)/100;
		DA  = (90*basic_salary)/100;
		gross_salary=basic_salary+HRA+DA;
		printf("Gross salary of emplyee is : %f\n",gross_salary);
	}
	else if(basic_salary>=20001){
		HRA = (30*basic_salary)/100;
		DA  = (95*basic_salary)/100;
		gross_salary=basic_salary+HRA+DA;
		printf("Gross salary of emplyee is : %f\n",gross_salary);
	}
}