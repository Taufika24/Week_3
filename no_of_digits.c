#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Enter number");
    scanf("%d", &n);
    while (n != 0) 
    {
        n = n / 10;
        i++;
    }
    printf("The number of digits is %d", i);
}
