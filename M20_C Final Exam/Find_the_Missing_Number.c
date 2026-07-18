
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-09/challenges/find-the-missing-number-11-3/problem?isFullScreen=true
#include<stdio.h>
int main(){
    int T;
    long long M[100000];
    long long a[100000], b[100000], c[100000];

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%lld %lld %lld %lld", &M[i], &a[i], &b[i], &c[i]);
    }

    for(int i = 0; i < T; i++){

        long long mul = a[i] * b[i] * c[i];

        if(M[i] == 0){
            printf("0\n");
        }
        else if(M[i] % mul == 0){
            printf("%lld\n", M[i] / mul);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}