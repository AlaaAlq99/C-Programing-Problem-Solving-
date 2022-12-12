#include <stdio.h>
void main (void){
	signed int num ;
	char check = 'c';
		do{
          printf("Enter Number: ");
          scanf("%d",&num);
        if (num>0){
			printf("Num is Positive\n");
		}
		else if (num<0){	
			printf("Num is Negative\n");
		}
		else{	
			printf("Num is Zero\n");
		}
		printf("Press (c) if you continue or (e) if you exist: ");
          scanf("%s",&check);
		}
		while (check == 'c');
}

