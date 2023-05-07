#include<stdio.h>
#include<math.h>
long long uoc(long long n){
    long long sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            sum += i;
            if (i * i != n)
                sum += n/i;
        }
    }
    return sum;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld", uoc(n));
    return 0;
}