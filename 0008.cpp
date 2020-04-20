#include <stdio.h>
#include <math.h>
#define ull unsigned long long
int main()
{
    ull t;
    scanf("%llu", &t);
    while (t--)
    {
        ull n, k;
        scanf("%llu %llu", &n, &k);
        char str[1005];
        scanf("%s", str);
        ull i, j, ans, max = 0;
        for (i = 0; i <= n - k; i++)
        {
            ans = 1;
            for (j = i; j < i + k; j++)
            {
                ans *= str[j] - '0';
            }
            if (max < ans)
                max = ans;
        }
        printf("%llu\n", max);
    }
    return 0;
}
