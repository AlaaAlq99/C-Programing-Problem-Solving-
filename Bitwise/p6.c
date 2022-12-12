#include <stdio.h>
void main( void )
{
    int num, order = -1, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=0; i<32; i++)
    {
        if((num>>i) & 1)
            order = i;
    }
    if (order != -1)
        printf("Highest order set bit is %d", order);
    else 
        printf("0 has no set bits.");
}