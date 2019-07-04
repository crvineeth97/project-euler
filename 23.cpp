#include <stdio.h>
#include <math.h>
int sud[28124] = {0}, abu[28124] = {0};
int sod(int n)
{
    int sum = 1, i;
    for (i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0)
            sum += i + (n / i);
    if ((int)pow((int)sqrt(n), 2) == n)
        sum -= (int)sqrt(n);
    return sum;
}
int main()
{
    int i, j, c = 0, t, n, flag = 0;
    sud[1] = 1;
    sud[2] = 1;
    sud[3] = 1;
    for (i = 4; i <= 28123; i++)
    {
        sud[i] = sod(i);
        if (sud[i] > i)
            abu[c++] = i;
    }
    scanf("%d", &t);
    while (t--)
    {
        flag = 0;
        scanf("%d", &n);
        if (n > 28123)
            printf("YES\n");
        else
        {
            for (i = 0; i < c; i++)
            {
                for (j = i; j < c; j++)
                {
                    if (abu[i] + abu[j] == n)
                    {
                        flag = 1;
                        printf("YES\n");
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 0)
                printf("NO\n");
        }
    }
    return 0;
}
