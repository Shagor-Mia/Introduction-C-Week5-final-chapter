#include <stdio.h>
#include <limits.h>
// finding max
int max_num(int s[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int max = max_num(s, n, i + 1);
    if (s[i] > max)
    {
        return s[i];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    int ans=max_num(s, n, 0);
    printf("%d",ans);
    return 0;
}