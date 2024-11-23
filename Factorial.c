#include <stdio.h>
int main() 
{
    int n, i, p = 1;
    printf("Enter number to calculate factorial");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        p = p * i;
    printf("The factorial of %d is %d", n, p);
}
