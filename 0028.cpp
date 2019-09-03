#include <stdio.h>
#include <math.h>
unsigned long long m = 1000000007;
unsigned long long ex(unsigned long long x, unsigned long long y)
{
    unsigned long long int x1, b[64], t, a = 1, i;
    x1 = y;
    for (i = 0; i < 64; i++)
    {
        b[i] = x1 % 2;
        x1 = x1 / 2;
    }
    t = x % m;
    for (i = 0; i < 64; i++)
    {
        if (b[i] == 1)
            a = (a * t) % m;
        t = (t * t) % m;
    }
    return a;
}
unsigned long long name(unsigned long long n)
{
    unsigned long long ans = (((2 * n) % m * (ex(n, 2) % m + 2) % m) % m + ((n - 1) % m * (((2 * (n - 1) % m) % m * (n - 1) % m) % m + (9 * (n - 1) % m) % m + 16) % m)) % m;
    ans = (ans % m * ex(6, m - 2) % m) % m;
    return ans;
}
int main()
{
    int t;
    unsigned long long n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%llu", &n);
        printf("%llu\n", name(n % m));
    }
    return 0;
}
