#include <stdio.h>
void main( void ){
    int i=0;
	char str[1000], *text;
	text=str;
	printf("Enter String :\n");
	  scanf("%s", str);
        i=0;	  
	   while(*(text) != '\0'){
		i++;
		text++;
		}	
		printf("Length is = %d",i);
}