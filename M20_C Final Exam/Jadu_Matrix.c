#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    // check square
    if (r == c)
    {
        // check primary, secondary diagonal
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // Primary or Secondary diagonal
                if (i == j || i + j == r - 1)
                {
                    if (a[i][j] != 1)
                    {
                        flag = 0;
                    }
                }

                // Other cells
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag = 0;
                    }
                }
            }
        }
    }
    else
    {
        flag = 0;
    }


    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}