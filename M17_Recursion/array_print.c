#include<stdio.h>

void arr_print(int a[],int n,int index){
    if(index==n){
        return;
    }
    printf("%d\n",a[index]);
    arr_print(a,n,index+1);
}
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

   }
   arr_print(arr,n,0);
    return 0;
}