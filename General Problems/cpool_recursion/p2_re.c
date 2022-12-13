#include <stdio.h>
int counter (int x,int y);
void main( void )
{
    int n1,n2;
    printf("Enter Lower Limit: ");
    scanf("%d", &n1);
    printf("Enter Higher Limit: ");
	scanf("%d", &n2);
	counter (n1,n2);
}
int counter (int x,int y)
{
	int i;
    for (i=x;i<=y;i++){
		printf (" %d,",i);
	}
}