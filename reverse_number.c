#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter number n");
    scanf("%d", &n);
    while (n != 0) 
    {
        d = n % 10;
        printf("%d", d);
        n = n / 10;
    }
}
