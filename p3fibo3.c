#include<stdio.h>
#include<math.h>
long long fibo(long long n){
    if (n == 1) {
        return 1;
    }
        long long f1 = 1, f2 = 1;
        for(int i = 3; i<= 92; i++){
            long long fn = f1 + f2;
            if (fn >= n) {
                return fn;
            }
            f2 = f1; 
            f1 = fn;
        }
 
    return 0;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",fibo(n));

    }
