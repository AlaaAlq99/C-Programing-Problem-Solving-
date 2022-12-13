#include <stdio.h>
void main( void ){
	int i,vowels=0,constant=0,digits=0,spaces=0;
    char str[1000];
	printf("Enter String is :\n");
	gets(str);
	printf("string will be :\n");
	for (i=0;str[i] != '\0';i++){
		 if((str[i]>='a' && str[i]<='z' )||(str[i]>='A' && str[i]<='Z')){
		     printf("%c",str[i]);
		 }
		 else{
			 continue;
		 }
	}
}