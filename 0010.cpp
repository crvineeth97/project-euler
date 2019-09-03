#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int i, j, t, n, prime[1000001] = {0};
    long long sum[1000001] = {0};
    for (i = 2; i < 1000001; i++)
    {
        if (prime[i] == 1)
        {
            sum[i] = sum[i - 1];
            continue;
        }
        else
            sum[i] = sum[i - 1] + i;
        for (j = 2 * i; j <= 1000001; j += i)
            prime[j] = 1;
    }
    scanf("%u", &t);
    while (t--)
    {
        scanf("%u", &n);
        printf("%lld\n", sum[n]);
    }
}
