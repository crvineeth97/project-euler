#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char s[13];
    int sum;
} data;
data stu[5200];
int n;
int compare(const void *a, const void *b)
{
    data *A = (data *)a;
    data *B = (data *)b;
    return strcmp(A->s, B->s);
}
int bs(char str[13])
{
    int b = 0, e = n - 1, m;
    while (b <= e)
    {
        m = (b + e) / 2;
        int fu = strcmp(str, stu[m].s);
        if (fu == 0)
            return m;
        else if (fu < 0)
            e = m - 1;
        else if (fu > 0)
            b = m + 1;
    }
    return 0;
}
int main()
{
    int i, j, q;
    char que[13];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", stu[i].s);
        for (j = 0; j < (int)strlen(stu[i].s); j++)
            stu[i].sum += stu[i].s[j] - 'A' + 1;
    }
    qsort(stu, n, sizeof(data), compare);
    scanf("%d", &q);
    while (q--)
    {
        scanf("%s", que);
        int fun = bs(que);
        printf("%d\n", (fun + 1) * stu[fun].sum);
    }
    return 0;
}
