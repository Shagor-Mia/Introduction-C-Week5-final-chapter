#include<stdio.h>
void gello(){
    printf("gello");
   
 }
void mello(){
    printf("mello\n");
    gello();
 }
 void hello(){
    printf("hello\n");
    mello();
 }
int main(){
   printf("hi main\n");
   hello();
    return 0;
}