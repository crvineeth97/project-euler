#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, arr[20][20], max = 0;
    for (i = 0; i < 20; i++)
        for (j = 0; j < 20; j++)
            scanf("%d", &arr[i][j]);
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (i + 3 < 20 && max < arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j])
                max = arr[i][j] * arr[i + 1][j] * arr[i + 2][j] * arr[i + 3][j];
            if (j + 3 < 20 && max < arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3])
                max = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
            if (i + 3 < 20 && j + 3 < 20 && max < arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3])
                max = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
            if (i + 3 < 20 && j > 2 && max < arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3])
                max = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
        }
    }
    printf("%d\n", max);
    return 0;
}
