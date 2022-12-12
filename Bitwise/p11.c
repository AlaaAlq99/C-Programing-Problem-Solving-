#include <stdio.h>
void main (void){
    int num ,binary_num[32] , count=0 , count1=0;	
	printf("Enter any Number : ");
    scanf ("%d",&num);
	int i =31;
	while (i>=0){
		binary_num[i]= num & 1;
		if (binary_num[i]==0)
			count ++;
		else
			count1 ++;
	    num = num >> 1;
		i--;
	}
	printf("Number of one's is : %d\n",count1);
	printf("Number of zero's is : %d\n",count);	
}