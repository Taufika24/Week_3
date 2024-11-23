#include <stdio.h>
int main() 
{
    int n, i = 0, s = 0;
    printf("Enter value of n");
    scanf("%d", &n);
    while (i < n)
    {
        s = s + i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d", n, s);
}
