#include <stdio.h>
void main( void ){
	int i,j,count=0;
    char str1[1000],str2[1000];
	printf("Enter First String is :\n");
	gets(str1);
	printf("Enter Second String is :\n");
	gets(str2);
	for (i=0;str1[i] != '\0';++i);
		for (j=0;str2[j] != '\0';++j, ++i ){
	        str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("%s",str1);
}