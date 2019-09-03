#include <stdio.h>
#include <math.h>
int prime[1000000] = {0};
long long nod(long long p)
{
    long long i, c = 0, di = 1;
    for (i = 2; i < 30000; i++)
    {
        if (prime[i] == -1)
            continue;
        c = 0;
        while (p % i == 0)
        {
            c++;
            p /= i;
        }
        di *= (c + 1);
        if (p == 1)
            break;
    }
    return di;
}
int main(int argc, char const *argv[])
{
    long long int i, j, nud[41041];
    for (i = 2; i < 1000000; i++)
    {
        if (prime[i] == -1)
            continue;
        for (j = 2 * i; j < 1000000; j += i)
            prime[j] = -1;
    }
    for (i = 1; i < 41041; i++)
        nud[i] = nod(i * (i + 1) / 2);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (i = 0;; i++)
        {
            if (nud[i] > n)
            {
                printf("%lld\n", i * (i + 1) / 2);
                break;
            }
        }
    }
    return 0;
}
