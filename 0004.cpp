#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int pal(int n)
{
    int temp = n, mod, rev = 0;
    while (temp != 0)
    {
        mod = temp % 10;
        temp /= 10;
        rev = rev * 10 + mod;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}
int main()
{
    int store[1000000] = {}, c = 0, i, j;
    for (i = 100; i < 1000; i++)
    {
        for (j = i; j < 1000; j++)
        {
            if (i * j < 101101)
                continue;
            if (pal(i * j))
                store[c++] = (i * j);
        }
    }
    qsort(store, c, 4, compare);
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = c - 1; i >= 0; i--)
        {
            if (store[i] < n)
            {
                printf("%d\n", store[i]);
                break;
            }
        }
    }
    return 0;
}
