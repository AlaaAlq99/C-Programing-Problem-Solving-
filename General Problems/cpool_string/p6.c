#include <stdio.h>
void main( void ){
	int j;
    char str1[1000];
	printf("Enter First String is :\n");
	gets(str1);
		for (j=0;str1[j] != '\0';++j ){
	    if (str1[j] == " "){
			continue;
		}
		}
	str1[j]='\0';
	printf("%s",str1);
}