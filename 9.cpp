#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c, max = -1;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            for (a = 1; 3 * a + 3 <= n; a++)
            {
                b = n / 2 * (n - 2 * a) / (n - a);
                c = n - a - b;
                if (pow(a, 2) + pow(b, 2) == pow(c, 2) && a * b * c > max)
                    max = a * b * c;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
