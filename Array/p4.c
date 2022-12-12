#include <stdio.h>
void main( void )
{
    int i,j,insert_element,n;
	printf("Enter Size of your Array is :\n");
	scanf("%d",&n);
	int arr [n];
	printf("Enter your Elements is :\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Insert Element is :\n");
	scanf("%d",&insert_element);
	printf("Enter Element positon is :\n");
	scanf("%d",&j);
	arr[j-1]=insert_element;
	printf("Array Elements after Insertion is :\n");
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}