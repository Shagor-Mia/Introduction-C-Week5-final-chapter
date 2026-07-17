#include<stdio.h>
int main(){
   int r,c;
   scanf("%d %d",&r,&c);
   int A[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&A[i][j]);
    }
  
}


for(int i=0;i<r;i++){
    for(int j=c-1;j>=0;j--){
        printf("%d ",A[i][j]);
    }
   
printf("\n");
    
}

   
    return 0;
}