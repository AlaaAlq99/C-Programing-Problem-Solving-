#include <stdio.h>
void main( void ){
    int i=0;
	char str1[1000], str2[1000] ,*text1, *text2;
	text1=str1;
	text2=str2;
	printf("Enter String1 :\n");
	scanf("%s", str1);
   	printf("Enter String2 :\n");
	scanf("%s", str2);
    while((*text1!='\0'&& *text2!='\0'))
		{ 
	     text1++; 
		 text2++; 
	     }
		 if (*text1 == *text2){
		printf("Two Strings are Equals \n"); 
		 }
		 else if (*text1 > *text2){
		printf("String 1 is greater than string 2 \n"); 
		 }
		 else if (*text2 > *text1){
		printf("String 2 is greater than string 1 \n"); 
		 }
}