#include <stdio.h>
void main( void ){
	int n,i;
	printf("Enter Size of Array is :\n");
	scanf("%d",&n);
	int *ptr,*ptr2,arr[n],arr2[n];
	ptr=arr;
	ptr2=arr2;
	printf("Enter Array Elements is :\n");
	for(i=0;i<n;i++){
	scanf("%d",&ptr[i]);
	ptr2[i]=ptr[i];
	}
	printf("Array Elements after copying is :\n");
	for(i=n-1;i>=0;i--){
	printf("%d",ptr2[i]);
	}
}