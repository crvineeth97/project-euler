#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char str[1005];
        scanf("%s", str);
        int i, j, ans, max = 0;
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
        printf("%d\n", max);
    }
    return 0;
}
