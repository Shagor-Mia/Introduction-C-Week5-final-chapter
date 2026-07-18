#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0;
    for(int i;i<=1000;i++){
        scanf("%d",&i);
    }
    if(n%i==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}