#include <stdio.h>
void main( void )
{
    int i,j,n;
	printf("Enter Size of your Array is :\n");
	scanf("%d",&n);
	int arr [n];
	printf("Enter your Elements is :\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
               if (arr [j]>arr[j+1]){
				   int temp = arr [j];
				   arr [j]=arr[j+1];
				   arr[j+1]=temp;
			   }
	}
}
		printf("First  Largest Element is %d\n",arr[n-1]);
		printf("Second Largest Element is %d\n",arr[n-2]);
}