#include <stdio.h>
#include <math.h>
int main()
{
    long long i, j;
    int prime[1000000] = {0}, primes[10001] = {0}, c = 1;
    for (i = 2; c <= 10000; i++)
    {
        if (prime[i] == 1)
            continue;
        primes[c++] = i;
        for (j = 2 * i; j <= 1000000; j += i)
            prime[j] = 1;
    }
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", primes[n]);
    }
    return 0;
}
