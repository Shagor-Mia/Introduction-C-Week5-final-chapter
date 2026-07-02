#include<stdio.h>

int print_values(int i){
    if(i==8){
        return;
    }
    print_values(i+1);
    printf("%d\n",i);
}

int main(){
   int i=1;
   print_values(i);
   
    return 0;
}