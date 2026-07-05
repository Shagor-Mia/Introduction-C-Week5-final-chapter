#include<stdio.h>
int main(){
   int r,c;
   scanf("%d %d",&r,&c);
   int arr[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
   }
   int total=r*c;
   int zero=0;
   
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(arr[i][j]==0){
            zero++;
        }
    }
   }
   if(total==zero){
    printf("this is zero matrix");
}else{
       printf("this is not zero matrix");

   }
    return 0;
}