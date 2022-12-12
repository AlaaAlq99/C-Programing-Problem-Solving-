#include <stdio.h>
void main(void){
  char x;
    printf ("Enter the Character  :");
    scanf("%c",&x);
	if (x=='a'||x=='u'||x=='i'||x=='e'||x=='o')
		printf (" %c is vowel",x);
	else
		printf (" %c is consonant",x);
}