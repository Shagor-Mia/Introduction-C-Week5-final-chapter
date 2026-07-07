#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
       
    }
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    for (int i = 0; i < N; i++)
    {
        primary_diagonal += A[i][i];
        secondary_diagonal += A[i][N - 1 - i];
    }

    int abs_value = abs(primary_diagonal - secondary_diagonal);
    printf("%d\n", abs_value);

    return 0;
}