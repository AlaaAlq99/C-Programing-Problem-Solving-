#include <stdio.h>
void main( void )
{
    int i,j,n1,n2,size;
	int arr1[n1];
	printf("Enter your Elements in Array1 is :\n");
	for (i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter Size of Array2 is :\n");
	scanf("%d",&n2);
	int arr2[n2];
	printf("Enter your Elements in Array2 is :\n");
	for (i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	size = n1 + n2;
	int total_array[size];
	j=0;
	while(j<size){
		for (i=0;i<n1;i++){
		total_array[j]=arr1[i];
		j++;
	     }
		for (i=0;i<n2;i++){
		total_array[j]=arr2[i];
		j++;
	}
    }
	printf(" Total Array is :\n");
	for (i=0;i<size;i++){
		for (j=0;j<size-i-1;j++){
               if (total_array[j]>total_array[j+1]){
				   int temp = total_array [j];
				   total_array [j]=total_array [j+1];
				   total_array[j+1]=temp;
			   }
	}
	}
	for (i=0;i<size;i++){
		printf("Total Array Elements is %d\n",total_array[i]);
	}
}