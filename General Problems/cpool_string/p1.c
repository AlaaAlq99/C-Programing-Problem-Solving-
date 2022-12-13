#include <stdio.h>
void main( void ){
	int i,vowels=0,constant=0,digits=0,spaces=0;
    char str[1000];
	printf("Enter String is :\n");
	gets(str);
	for (i=0;str[i] != '\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'){
			vowels++;
		}
		else if(str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='I'||str[i]=='U'){
			++vowels;
		}
		else if((str[i]>='a' && str[i]<='z' )||(str[i]>='A' && str[i]<='Z')){
			constant++;
		}
		else if (str[i]>='0' && str[i]<='9'){
			++digits;
		}
		else if (str[i]== ' '){
			++spaces;
		}
	}
	printf("Vowels is: %d\n",vowels);
	printf("Constant is: %d\n",constant);
	printf("Digits is: %d\n",digits);
	printf("White Spaces is: %d\n",spaces);
}