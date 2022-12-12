#include <stdio.h>
void main (void){
    int num ,flip_num;	
	printf("Enter any Number : ");
    scanf ("%d",&num);
	flip_num = ~ num;
	printf("Number after bits are fliped : %d ",flip_num);
}
	
	
	