#include <stdio.h>
void main( void ){
	int i,index=0;
    char str[1000],found;
	printf("Enter String is :\n");
	gets(str);
	printf("Enter a character Found is :\n");
	scanf("%c",&found);
	for (i=0;str[i] != '\0';i++){
		if(str[i]==found){
			index=i;
		}
	}
	printf("Frecqncy is: %d\n",index);
}