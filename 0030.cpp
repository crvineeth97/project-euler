#include <stdio.h>
#include <math.h>
unsigned int ans[7] = {0};
unsigned int func(unsigned int n, unsigned int p)
{
    unsigned int sum = 0;
    while (n != 0)
    {
        sum += (unsigned int)pow(n % 10, p);
        n /= 10;
    }
    return sum;
}
int main()
{
    unsigned int i, j, n;
    for (i = 3; i < 7; i++)
        for (j = 2; j < 3 * (unsigned int)pow(10, i); j++)
            if (func(j, i) == j)
                ans[i] += j;
    scanf("%u", &n);
    printf("%u\n", ans[n]);
    return 0;
}
