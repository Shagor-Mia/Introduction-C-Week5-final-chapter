#include <stdio.h>
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

    // specific row print.রো প্রিন্ট করতে বললে কলাম এর উপর লুপ চলবে।
    int row;
    scanf("%d", &row);

    printf("no. %d specific row\n",row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[row][i]);
    }
    printf("\n");
    // specific column print.কলাম প্রিন্ট করতে বললে রো এর উপর লুপ চলবে।
    int col;
    scanf("%d", &col);
    printf("no. %d specific column\n",col);
    for (int i = 0; i < r; i++)
    {

        printf("%d\n", arr[i][col]);
    }
    return 0;
}