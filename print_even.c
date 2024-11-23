#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("Enter values for n");
    scanf("%d", &n);
    for (i = 0; i < n; i += 2) 
        printf("%d, ", i);
}
