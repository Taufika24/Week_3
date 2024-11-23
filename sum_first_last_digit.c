#include <stdio.h>
int main()
{
    int num, fd, ld, sum;
    printf("Enter a number");
    scanf("%d", &num);
    ld = num % 10;
    fd = num;
    while (fd >= 10) 
        fd /= 10; 
    sum = fd + ld;
    printf("The sum of the first and last digit is: %d", sum);
    return 0;
}
