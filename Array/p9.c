#include <stdio.h>
void main( void )
{
    int i,n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter your Elements in Array is :\n");
	i=0;
	while(i<n){
		scanf("%d",&arr[i]);
		i++;
	}
	i=0;
	printf("Alterenative Elements in Array is :\n");
	while(i<n){
	if(i%2==0){
			printf ("%d\n",arr[i]);
		}
		i++;
	}
}