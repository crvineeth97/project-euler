#include <stdio.h>
#include <math.h>
long long nos[5000001] = {0};
int ans[5000001] = {0};
long long nost(long long a)
{
    long long c = 0;
    while (a != 1)
    {
        if (a % 2 == 0)
            a /= 2;
        else
            a = 3 * a + 1;
        c++;
    }
    return c;
}
int main(int argc, char const *argv[])
{
    long long i, max = 0;
    int t, n;
    for (i = 2; i <= 5000000; i++)
    {
        nos[i] = nost(i);
        if (nos[i] < max)
            ans[i] = ans[i - 1];
        else
        {
            max = nos[i];
            ans[i] = i;
        }
    }
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}
