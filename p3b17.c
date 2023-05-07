#include<stdio.h>
#include<math.h>

int ptich(long long n){
    int res ;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            res = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    }
    if (n != 1) {
        res = n;
    }
    return res;

}
int main(){
    int t;
    long long n;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++){
    scanf("%lld",&n);
    printf("%d\n",ptich(n));
    }
    return 0;
}