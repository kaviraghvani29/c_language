#include <stdio.h>

int main()
{
    int a[3][3];

    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;

    a[1][0] = 1;
    a[1][1] = 2;
    a[1][2] = 3;

    a[2][0] = 1;
    a[2][1] = 2;
    a[2][2] = 3;

    int i = sizeof(a) / sizeof(a[0]);
    int j = sizeof(a[0]) / sizeof(a[0][0]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}