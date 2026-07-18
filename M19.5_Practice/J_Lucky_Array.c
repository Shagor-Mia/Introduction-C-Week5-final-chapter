#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    // finding minimum
    int min = s[0];
    for (int i = 0; i < n; i++)
    {
        if (s[i] < min)
        {
            min = s[i];
        }
    }
    // counting minimum number
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] ==min)
        {
            count++;
        }
    }
  
// check odd,even match
    if(count%2!=0){
     printf("Lucky");   
    }else{
        printf("Unlucky");
    }
    return 0;
}