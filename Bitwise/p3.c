#include <stdio.h>
void main( void )
{
    int num, n, newNum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to set (0-31): ");
    scanf("%d", &n);
    newNum = (1 << n) | num;
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);
}