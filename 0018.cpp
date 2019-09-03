#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int a[16][16], ans[16][16] = {0}, maxi = 0, i, j;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                scanf("%d", &a[i][j]);
                if (i == 0 && j == 0)
                {
                    ans[i][j] = a[i][j];
                    continue;
                }
                if (j == 0)
                    ans[i][j] = ans[i - 1][j] + a[i][j];
                else if (j == i)
                    ans[i][j] = ans[i - 1][j - 1] + a[i][j];
                else
                    ans[i][j] = max(ans[i - 1][j] + a[i][j], ans[i - 1][j - 1] + a[i][j]);
            }
        }
        for (j = 0; j < n; j++)
            if (ans[n - 1][j] > maxi)
                maxi = ans[n - 1][j];
        printf("%d\n", maxi);
    }
    return 0;
}
