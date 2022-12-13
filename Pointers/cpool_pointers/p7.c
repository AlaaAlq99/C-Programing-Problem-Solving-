#include <stdio.h>
void main( void ){
    int i,j,row,colum;
	printf("Enter Numbers of Rows is :\n");
	scanf("%d",&row);
	printf("Enter Numbers of Colums is :\n");
	scanf("%d",&colum);
	int  arr1[row][colum],arr2[row][colum];
	printf("Enter your Elements in Array1 is :\n");
	for (i=0;i<row;i++){
		for (j=0;j<colum;j++){
		scanf("%d", (*(arr1 + i) + j));
	}
	}
	printf("Enter your Elements in Array2 is :\n");
	for (i=0;i<row;i++){
		for (j=0;j<colum;j++){
		scanf("%d",(*(arr2 + i) + j));
	}
	}
	printf("Sumation of Elements in Two Arraies is :\n");
	for (i=0;i<row;i++){
		for (j=0;j<colum;j++){
		printf("%d  ",*(*(arr1 + i) + j) + *(*(arr2 + i) + j));
	}
	printf("\n");
	}
}