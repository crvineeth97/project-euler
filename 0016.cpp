#include <stdio.h>
#include <math.h>
#include <string.h>
int p[3025] = {0}, ans[10001] = {0};
int main()
{
    int i, j, t, n;
    p[0] = 1;
    for (i = 1; i < 10001; i++)
    {
        for (j = 0; j < 3025; j++)
            p[j] *= 2;
        for (j = 0; j < 3024; j++)
        {
            if (p[j] > 9)
            {
                p[j + 1] += p[j] / 10;
                p[j] = p[j] % 10;
            }
            ans[i] += p[j];
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
