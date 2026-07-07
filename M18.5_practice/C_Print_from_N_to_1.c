#include <stdio.h>

void print_backword(int N)
{

    if (N == 1)
    {
        return;
    }
    printf("%d ", N);
    print_backword(N - 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    print_backword(N);
    int i=1;
    printf("%d",i);
    return 0;
}