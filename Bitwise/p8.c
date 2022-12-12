#include <stdio.h>
void main (void){
    int num , order=31;	
	printf("Enter any Number : ");
    scanf ("%d",&num);
    for(int i=0; i<32; i++)
    {
        if((num >> i) & 1){
			order = i;
            break;
		}
           
    }
	printf("Lowest order set bit is %d\n",order);	
}