#include <stdio.h>
int main()
{
    int a0, a1, s, i, n;
    a0 = 0;
    a1 = 1;
    printf("Enter value of n");
    scanf("%d", &n);
    printf("%d, %d, ", a0, a1);
    for (i = 3; i <= n; i++) 
    {
        s = a0 + a1;
        a0 = a1;
        a1 = s;
        printf("%d, ", s);
    }
}
