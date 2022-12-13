#include <stdio.h>
void main( void ){
	int n,index;
	printf("Enter size of Array is :\n");
	scanf("%d",&n);
    char str[n],found;
	printf("Enter String is :\n");
	for (i=0;i<n;i++){
		scanf("%c",&str[n]);
	}
	printf("Enter a character Found is :\n");
	scanf("%c",&found);
	for (i=0;i<n;i++){
		if(str[n]==found){
			index=i;
		}
	}
	printf("Frecqncy is: %d\n",index);
}