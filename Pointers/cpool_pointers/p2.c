#include <stdio.h>
void main( void ){
	int n,count=0,temp;
	printf("Enter Size of Array1 is :\n");
	scanf("%d",&n);
	int i,j,k,arr[n],*ptr;
	ptr=arr;
	printf("Enter your Elements in Array1 is :\n");
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	while (i>=0&&count==0){
	 for (j = 0; j<=n; j++){
		 if(ptr[i]==arr[j] && i!=j){
			count++;
			temp=arr[j];
		 }
	 }
	 i--;
 }
 printf("this number %d is repeated %d times",temp,count);
}