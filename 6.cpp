#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long int t, n;
    scanf("%llu", &t);
    while (t--)
    {
        scanf("%llu", &n);
        unsigned long long ans = n * (n + 1) / 2 * (n - 1) / 3 * (3 * n + 2) / 2;
        printf("%llu\n", ans);
    }
    return 0;
}
