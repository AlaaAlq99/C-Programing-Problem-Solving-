#include <stdio.h>
void main (void){
    int num;	
	printf("Enter num of day :");
    scanf ("%d",&num);
	switch (num){
		case 6 :
		printf ("Saturday\n");
		break;
		case 7 :
		printf ("Sunday\n");
		break;
		case 1 :
		printf ("Monday\n");
		break;
		case 2 :
		printf ("Tuseday\n");
		break;
		case 3 :
		printf ("wednesday\n");
		break;
		case 4 :
		printf ("Thursday\n");
		break;
		case 5 :
		printf ("Friday\n");
		break;
	}
}
