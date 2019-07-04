#include <stdio.h>
#include <math.h>
int fib1[5000] = {0};
int fib2[5000] = {0};
int temp[5000] = {0};
int ans[5001] = {0};
int main()
{
    fib1[0] = 1;
    fib2[0] = 1;
    int i, c = 2, j;
    ans[1] = 1;
    for (i = 3; fib2[4999] == 0; i++)
    {
        for (j = 0; j < 5000; j++)
        {
            temp[j] = fib2[j];
            fib2[j] += fib1[j];
            fib1[j] = temp[j];
        }
        for (j = 0; j < 5000; j++)
        {
            fib2[j + 1] += fib2[j] / 10;
            fib2[j] = fib2[j] % 10;
        }
        for (j = 4999; fib1[j] == 0; j--)
        {
            if (fib2[j] != 0 && fib1[j] == 0)
            {
                ans[c++] = i;
                break;
            }
        }
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}
