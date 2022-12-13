#include <stdio.h>
void main( void ){
    int i,j,k,row1,colum1;
	printf("Enter Numbers of Rows   is :\n");
	scanf("%d",&row1);
	printf("Enter Numbers of Colums is :\n");
	scanf("%d",&colum1);
	int arr1[row1][colum1];
	printf("Enter your Elements in Array is :\n");
	for (i=0;i<row1;i++){
		for (j=0;j<colum1;j++){
		scanf("%d",&arr1[i][j]);
	}
	}
	printf("Entered Array is :\n");
	for (i=0;i<row1;i++){
		for (j=0;j<colum1;j++){
		printf("%d ",arr1[i][j]);
	}
	printf("\n");
	}
	printf("Transpose of Array is :\n");
	for (i=0;i<colum1;i++){
		for (j=0;j<row1;j++){
		 printf("%d ",arr1[j][i]);
	}
	printf("\n");
	}
}