#include <stdio.h>
void main( void )
{
    int i,n;
    printf("Enter Size of your Elements in Array is :\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter your Elements in Array is :\n");
	i=0;
	while(i<n-1){
		scanf("%d",&arr[i]);
		i++;
	}
	for (i = 0; i < n - 1; i++)
	{
		if(arr[i+1]!=arr[i]+1)
		{
			printf("Missing element is : %d \n", arr[i]+1);
			break;
		}
	}
}