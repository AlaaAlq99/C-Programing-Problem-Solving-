#include <stdio.h>
void main( void ){
	int n;
	printf("Enter Size of Array1 is :\n");
	scanf("%d",&n);
	int i,j,k,arr[n],*ptr;
	ptr=arr;
	printf("Enter your Elements in Array1 is :\n");
	for (i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
               if (ptr [j]>ptr[j+1]){
				   int temp = ptr [j];
				   ptr [j]=ptr[j+1];
				   ptr[j+1]=temp;
			   }
	}
}
		printf("Difference between two Elements is %d ",ptr[n-1]-ptr[0]);
}