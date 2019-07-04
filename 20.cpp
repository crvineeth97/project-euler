#include <stdio.h>
#include <math.h>
int dig[2600] = {0}, sum[1001] = {0}, i, j;
int main()
{
    dig[0] = 1;
    sum[0] = 1;
    sum[1] = 1;
    for (i = 2; i < 1001; i++)
    {
        for (j = 0; j < 2600; j++)
            dig[j] *= i;
        for (j = 0; j < 2599; j++)
        {
            if (dig[j] > 9)
            {
                dig[j + 1] += dig[j] / 10;
                dig[j] = dig[j] % 10;
            }
            sum[i] += dig[j];
        }
    }
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", sum[n]);
    }
    return 0;
}
