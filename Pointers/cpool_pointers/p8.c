#include <stdio.h>
void main( void ){
    int i,j,n,search;
	printf("Enter size is :\n");
	scanf("%d",&n);
	int  arr1[n];
	int *ptr;
	ptr=arr1;
	printf("Enter the element of Array:\n "); 
    for(i=0; i<n; i++){
	scanf("%d",&arr1[i]);
	}
	printf("Enter the element to search:\n ");  
	  scanf("%d", &search);   
	   for(i=0; i<=n; i++){
		if(ptr[i]==search)
		{
		  printf("%d is found in position number %d",search,i+1);
		}
		}	
}