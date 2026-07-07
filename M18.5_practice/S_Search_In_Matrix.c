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
int specific;
scanf("%d",&specific);

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(A[i][j]==specific){
            
            printf("will not take number\n");
            return 0;
        }
        
    }
   

    
}
printf("will take number\n");
   
    return 0;
}