// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/difference-array/problem?isFullScreen=true

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        int A[n], B[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i]; // copy A to B
        }

        // Selection Sort on B
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;

            for (int j = i + 1; j < n; j++)
            {
                if (B[j] < B[min])
                {
                    min = j;
                }
            }

            int temp = B[i];
            B[i] = B[min];
            B[min] = temp;
        }

        // Calculate and print C
        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(A[i] - B[i]));
        }

        printf("\n");
    }

    return 0;
}