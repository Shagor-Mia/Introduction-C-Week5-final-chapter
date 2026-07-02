#include<stdio.h>

int print_values(int i){
    if(i==8){
        return;
    }
    printf("%d\n",i);
    print_values(i+1);
}
// reverse
int reverse_print(int i){
    if(i==0){
        return;
    }
    printf("%d\n",i);
   reverse_print(i-1);
}
int main(){
   int i=1;
   print_values(i);
   printf("++++++++\n");
   reverse_print(5);
    return 0;
}