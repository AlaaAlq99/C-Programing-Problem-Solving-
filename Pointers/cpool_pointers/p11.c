#include <stdio.h>
void main( void ){
    int i,count=0;
	char str1[1000],*text1;
	text1=str1;
	printf("Enter String1 :\n");
	scanf("%s", text1);
		 for(i=0;text1[i]!='\0';i++){
		 count++;
	    }
      for(i=count;text1[i]!='\0';i--){
		 printf("%c",text1[i]);
	    }
	
}
