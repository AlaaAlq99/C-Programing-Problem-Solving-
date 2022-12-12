#include <stdio.h>
#include <math.h>
void main (void){
    int year;
	printf("Enter the Year : ");
    scanf ("%d",&year);
	if (year%4==0 && year%100!=0 || year%400==0)
		printf("it is a leap year \n");
	else
		printf("not a leap year \n");
}
	