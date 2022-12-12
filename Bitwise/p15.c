#include <stdio.h>
void main (void){
    int num ,binary_num[32];	
	printf("Enter any Number : ");
    scanf ("%d",&num);
	int i =31;
	while (i>=0){
		binary_num[i]= num & 1;
		i--;
		num = num >> 1;
	}
	printf("Binary Number is: ");
	for ( int j=0;j<32;j++){
	printf( "%d",binary_num [j]);
	}
}