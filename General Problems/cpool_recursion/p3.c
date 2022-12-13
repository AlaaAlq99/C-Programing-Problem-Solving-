#include <stdio.h>
int Even(int x,int y);
int Odd(int x,int y);
void main( void )
{
    int n1,n2;
    printf("Enter Lower Limit: ");
    scanf("%d", &n1);
    printf("Enter Higher Limit: ");
	scanf("%d", &n2);
	if(n2%2==0)
	   Even(n1,n2);
    else
	   Odd(n1,n2);
}
int Even(int x,int y)
{
	int i;
    for (i=x;i<=y;i++){
		if(i%2==0)
		printf (" %d,",i);
	}
}
int Odd(int x,int y)
{
	int i;
    for (i=x;i<=y;i++){
		if(i%2!=0)
		printf (" %d,",i);
	}
}