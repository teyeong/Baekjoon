#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int t, n, m;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        long long num = 1;
        for (int j = 0; j < n; j++) {
            num *= m - j;
            num /= j + 1;
        }
        printf("%lld\n", num);
    }
    return 0;
}