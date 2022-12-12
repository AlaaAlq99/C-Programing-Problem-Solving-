#include <stdio.h>
#include <math.h>
void main (void){
    int cost_prise,selling_prise,profit=0,loss=0;
	printf("Enter Cost Prise :");
    scanf ("%d",&cost_prise);
	printf("Enter Selling Prise :");
    scanf ("%d",&selling_prise);
	profit=selling_prise-cost_prise;
	if (profit>0)
	printf("profit is = %d\n",profit);
    else if (profit<0){
		loss=cost_prise-selling_prise;
	    printf("loss is = %d\n",loss);
	}
	else
		printf("no profit no loss\n");
}
	