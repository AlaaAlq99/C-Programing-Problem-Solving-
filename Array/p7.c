#include <stdio.h>
void main( void )
{
    int i,n1,location_of_delete_element;
	printf("Enter Size of Array is :\n");
	scanf("%d",&n1);
	int arr1[n1];
	printf("Enter your Elements in Array is :\n");
	for (i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the Location of Delete Elements of Array is :\n");
	scanf("%d",&location_of_delete_element);
	printf("Resultant Array is :\n");
	for (i=0;i<n1;i++){
	if(arr1[i]==arr1[location_of_delete_element]){
		continue;
	}
	printf ("%d\n",arr1[i]);
	}
}