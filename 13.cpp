#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, s, carry = 0;
    char a[1000][51], sum[60];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", a[i]);
    for (j = 49; j >= 0; j--)
    {
        s = carry;
        for (i = 0; i < n; i++)
            s += a[i][j] - '0';
        sum[49 - j] = s % 10 + '0';
        carry = s / 10;
    }
    j = 50;
    while (carry != 0)
    {
        sum[j++] = carry % 10 + '0';
        carry /= 10;
    }
    for (i = j - 1; i >= j - 10; i--)
        printf("%c", sum[i]);
    printf("\n");
    return 0;
}
