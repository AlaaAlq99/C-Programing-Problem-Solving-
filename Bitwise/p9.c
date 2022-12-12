#include <stdio.h>
void main (void){
    int num , count=0 , MSB;	
	printf("Enter any Number : ");
    scanf ("%d",&num);
	  MSB = 1 << 31;
    for(int i=0; i<32; i++)
    {
        if((num << i) & MSB)
            break;
           count++;
    }
	printf("Total Number of Leading Zero's is %d\n",count);	
}