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
	}
	printf ("Elements in Array is : ");
	for (i=0;i<n;i++){
	printf ("%d ,",arr[i]);
	}
}