#include <stdio.h>
#include <math.h>
long long dp[501][501] = {0};
int main()
{
    int i, j, t;
    for (i = 0; i <= 500; i++)
    {
        for (j = 0; j <= 500; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000007;
        }
    }
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &i, &j);
        printf("%lld\n", dp[i][j]);
    }
    return 0;
}
