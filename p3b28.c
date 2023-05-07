#include<stdio.h>
int lp(long long n){
    while(n){
        int tmp = n % 10;
        if (tmp != 6 && tmp != 0 && tmp != 8){
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%d", lp(n));
}