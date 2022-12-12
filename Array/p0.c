#include <stdio.h>
void main( void )
{
	int n,i;
	printf("Enter Size of Array is :\n");
	scanf("%d",&n);
    int arr[n];
	printf("Enter Array Elements is :\n");
	for (i=0;i<n;i++){
	scanf("%d",&arr[i]);
	if (arr[i] <= 0){
		printf ("Negative Elements in Array is : %d",arr[i]);
	}
	}
}