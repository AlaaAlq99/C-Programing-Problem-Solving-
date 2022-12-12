#include <stdio.h>
void main( void )
{
	int n,i,sum=0;
	printf("Enter Size of Array is :\n");
	scanf("%d",&n);
    int arr[n];
	printf("Enter Array Elements is :\n");
	for (i=0;i<n;i++){
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	}
	printf ("Sum of Elements in Array is : %d",sum);
}