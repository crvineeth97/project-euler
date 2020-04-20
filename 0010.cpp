#include <stdio.h>
#include <math.h>
#define ull unsigned long long
ull i, j, t, n, prime[2000001] = {0};
ull sum[2000001] = {0};
int main()
{
    for (i = 2; i < 2000001; i++)
    {
        if (prime[i] == 1)
        {
            sum[i] = sum[i - 1];
            continue;
        }
        else
            sum[i] = sum[i - 1] + i;
        for (j = i * i; j <= 2000001; j += i)
            prime[j] = 1;
    }
    scanf("%llu", &t);
    while (t--)
    {
        scanf("%llu", &n);
        printf("%llu\n", sum[n]);
    }
}
