#include <stdio.h>
void main( void )
{
    int i,n1=15,baby=0,school=0,adult=0;
	int arr1[n1];
	printf("Enter your Elements in Array is :\n");
	i=0;
	while(i<n1){
		scanf("%d",&arr1[i]);
		if(arr1[i]>0 && arr1[i]<=5){
			baby++;
		}
		else if(arr1[i]>5 && arr1[i]<=17){
			school++;
		}
		else if(arr1[i]>18){
			adult++;
		}
		i++;
	}
	printf ("Numbers of Still a Baby %d\n",baby);
	printf ("Numbers of Attending School %d\n",school);
	printf ("Numbers of Adult Life Age %d\n",adult);
}