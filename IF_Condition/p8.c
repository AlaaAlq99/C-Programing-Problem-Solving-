#include <stdio.h>
void main (void){
    int a,b,c,total_angle = 0;   //a,b,c is angles
	printf("Enter angles :");
    scanf ("%d%d%d",&a,&b,&c);
	total_angle = a + b + c;
	if(total_angle == 180 && a != 0 && b != 0 && c != 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
}