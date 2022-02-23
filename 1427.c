#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n[10];
    int m, temp, b, c = 0;
    long long N;

    scanf("%lld", &N);

    b = N;
    while (b != 0) {
        b /= 10;
        c++;
    }

    for (int j = 0; j < c; j++) {
        n[j] = N % 10;
        N /= 10;
    }

    for (int i = 0; i < c - 1; i++) {
        m = i;
        for (int l = i + 1; l < c; l++)
            if (n[l] > n[m])
                m = l;
        temp = n[i];
        n[i] = n[m];
        n[m] = temp;
    }

    for (int k = 0; k < c; k++)
        printf("%d", n[k]);

    return 0;
}