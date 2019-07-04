#include <stdio.h>
#include <math.h>
unsigned long long hcf(unsigned long long a, unsigned long long b)
{
    if (a % b == 0)
        return b;
    return hcf(b, a % b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned long long n, ans = 1, i;
        scanf("%llu", &n);
        for (i = 2; i <= n; i++)
            ans = ans / hcf(ans, i) * i;
        printf("%llu\n", ans);
    }
    return 0;
}
