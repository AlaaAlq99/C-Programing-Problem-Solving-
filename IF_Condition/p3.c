#include <stdio.h>
void main (void){
     int s1,s2,s3;      // s1 is = math & s2 is = phy & s3 is = chem	
	printf("Enter the degree of course one :");
    scanf ("%d",&s1);
	printf("Enter the degree of course two :");
    scanf ("%d",&s2);
	printf("Enter the degree of course three :");
    scanf ("%d",&s3);
	if (((s1 >= 65) && s2+s3 >=140) || s1+s2+s3 >=180 )
		printf("the candidate is eligible for admission \n");
	else 
		printf("the candidate isnot eligible for admission \n");
		
}