#include <stdio.h>
#include <math.h>
int sud[100001], ami[100001], c = 0, t;
int sod(int n)
{
    int sum = 1, i;
    for (i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0)
            sum += i + (n / i);
    return sum;
}
int main()
{
    int i, n;
    for (i = 1; i <= 100000; i++)
        sud[i] = sod(i);
    for (i = 1; i <= 100000; i++)
        if (sud[i] != i && sud[i] <= 100000 && sud[sud[i]] == i)
            ami[c++] = i;
    scanf("%d", &t);
    while (t--)
    {
        int sum = 0;
        scanf("%d", &n);
        for (i = 0; i < c; i++)
            if (ami[i] < n)
                sum += ami[i];
        printf("%d\n", sum);
    }
    return 0;
}
