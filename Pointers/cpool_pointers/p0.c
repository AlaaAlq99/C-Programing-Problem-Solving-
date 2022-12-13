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
	for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j){
                continue;
            }
            else if (ptr[i] == ptr[j]){
                k = j;
                n--;
                while (k < n){
                    ptr[k] = ptr[k+1];
                    k++;
                }
                j = 0;
            }
        }
    }
	
    for (i = 0; i < n; i++){
		printf("%d ",ptr[i]);
	}
}