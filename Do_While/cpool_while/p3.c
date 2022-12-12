#include <stdio.h>
void main (void){
	int num,i=1;
	printf("print all Even Numbers till : ");
	scanf("%d",&num);
	printf("All Even Numbers are : \n");
		while (i <= num){
			if(i%2 ==0 ){
		      printf("%d\n",i);
			}
		i++;
		}
}