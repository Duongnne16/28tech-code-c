#include<stdio.h>
#include<math.h>

void ptich(long long n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu ++;
                n /= i;
            }
            printf("%d^%d", i , mu);
            if (n != 1)
                printf(" * ");
        }
    }
    if (n != 1) {
        printf("%ldd^1",n);
    }

}
int main(){
    long long n;
    scanf("%lld",&n);
    ptich(n);
    return 0;
}