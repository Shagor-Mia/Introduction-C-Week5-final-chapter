// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/magical-tree-3/problem?isFullScreen=true

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = (n + 11) / 2;

    int star = 1;
    int space = line - 1;

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space; j++)
            printf(" ");

        for (int j = 0; j < star; j++)
            printf("*");

        printf("\n");

        star += 2;
        space--;
    }

    int trunkSpace = ((2 * line - 1) - n) / 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < trunkSpace; j++)
            printf(" ");

        for (int j = 0; j < n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}