

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal = true;
    //    check square
    if (r == c)
    {
        // square.now check diagonal here
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // secondary diagonal condition
                if (i + j==r-1)
                {
                    // diagonal
                }
                else
                {
                    if (arr[i][j] != 0)
                    {

                        is_diagonal = false;
                        printf("this is not secondary diagonal matrix");
                    }
                }
            }
        }

        if (is_diagonal == true)
        {
            printf("this is secondary  diagonal matrix");
        }
    }
    else
    {
        // not square. not a diagonal
        printf("this is not square & not diagonal matrix");
    }
    return 0;
}
