#include <stdio.h>
long int factorial (int n);
void main( void )
{
    int n;
    printf("Enter a positive num: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, factorial(n));
}
long int factorial(int n)
{
    if (n >= 1) 
        return n*factorial(n-1); 
    else
        return 1;
}