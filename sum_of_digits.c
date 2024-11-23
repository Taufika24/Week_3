#include <stdio.h>
int main()
{
    int n, i, s = 0, d;
    printf("Enter number");
    scanf("%d", &n);
    while (n != 0) 
    {
        d = n % 10;
        n = n / 10;
        s = s + d;
    }
    printf("The sum of digits is %d", s);
}
