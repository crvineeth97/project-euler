#include <stdio.h>
#include <math.h>
int main()
{
    long long i, j;
    int prime[1000000] = {0};
    for (i = 2; i < 1000000; i++)
    {
        if (prime[i] == 1)
            continue;
        for (j = 2 * i; j <= 1000000; j += i)
            prime[j] = 1;
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        int flag = 1;
        scanf("%lld", &n);
        for (i = 2;; i += 2)
        {
            while (n % i == 0)
                n /= i;
            if (n == 1)
            {
                printf("%lld\n", i);
                break;
            }
            if (n > 1000000)
            {
                for (j = 3; j < 1000000; j += 2)
                {
                    if (prime[j] == 1)
                        continue;
                    if (n % j == 0)
                    {
                        flag = 1;
                        i = j - 2;
                        break;
                    }
                    else
                        flag = 0;
                }
            }
            if (flag == 0)
            {
                printf("%lld\n", n);
                break;
            }
            if (i == 2)
                i = 1;
        }
    }
    return 0;
}
