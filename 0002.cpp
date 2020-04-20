#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned long long n, ans = 2, i = 0, a = 0, b = 2, p = 0;
        scanf("%llu", &n);
        for (i = 2; p <= n; i++)
        {
            ans += p;
            p = 4 * b + a;
            a = b;
            b = p;
        }
        printf("%llu\n", ans);
    }
}
