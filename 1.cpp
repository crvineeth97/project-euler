#include <stdio.h>
int main()
{
    int t, i;
    long long sum, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);
        sum = (105 * (((n - 1) / 15) * ((n - 1) / 15) + ((n - 1) / 15)) / 2) - (45 * ((n - 1) / 15));
        for (i = 1; i <= ((n - 1) % 15); i++)
            if (i % 3 == 0 || i % 5 == 0)
                sum += (((n - 1) / 15) * 15 + i);
        printf("%lld\n", sum);
    }
    return 0;
}
