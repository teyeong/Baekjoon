#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, n1, n2, c = 0;

    scanf("%d", &n);

    if (n < 10)
    {
        n1 = n * 10;
        n1 = (n1 / 10) + (n1 % 10);
    }
    else
    {
        n1 = (n / 10) + (n % 10);
    }
    n2 = (n % 10) * 10 + n1 % 10;
    c++;

    while (1)
    {
        if (n2 == n)
            break;
        n1 = (n2 / 10) + (n2 % 10);
        n2 = (n2 % 10) * 10 + (n1 % 10);
        c++;
    }

    printf("%d", c);

    return 0;
}