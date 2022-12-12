#include <stdio.h>
#include <math.h>
void main (void){
    int amount;
	int n500=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
	printf("Enter amount :\n");
    scanf ("%d",&amount);
	printf("the total number if notes is :\n");
	if (amount>=500){
		n500=amount/500;
		amount-=n500*500;
	}
	if (amount>=100){
		n100=amount/100;
		amount-=n100*100;
	}
	if (amount>=50){
		n50=amount/50;
		amount-=n50*50;
	}
	if (amount>=20){
		n20=amount/20;
		amount-=n20*20;
	}
	if (amount>=10){
		n10=amount/10;
		amount-=n10*10;
	}
	if (amount>=5){
		n5=amount/5;
		amount-=n5*5;
	}
	if (amount>=2){
		n2=amount/2;
		amount-=n2*2;
	}
	if (amount>=1){
		n1=amount;
	}
	
	printf("500 = %d\n",n500);
	printf("100 = %d\n",n100);
	printf("50 = %d\n",n50);
	printf("20 = %d\n",n20);
	printf("10 = %d\n",n10);
	printf("5 = %d\n",n5);
	printf("2 = %d\n",n2);
	printf("1 = %d\n",n1);
}
	