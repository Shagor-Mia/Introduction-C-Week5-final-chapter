#include <stdio.h>

void print_forword(int N)
{

    if (N == 0)
    {
        return;
    }
    print_forword(N - 1);
    printf("%d\n", N);
}

int main()
{
    int N;
    scanf("%d", &N);
    print_forword(N);
    return 0;
}