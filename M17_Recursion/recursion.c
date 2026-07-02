#include<stdio.h>

 void hello(){
    printf("hello\n");
    hello();
 }
int main(){
   printf("hi main\n");
   hello();
    return 0;
}