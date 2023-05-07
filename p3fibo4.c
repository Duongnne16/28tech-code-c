#include<stdio.h>
#include<math.h>

int checkfibo(long long n){
    if ( n == 0 || n == 1) return 1;
    long long f1 = 1, f2 = 0;
    for(int i = 3; i <= 92; i++){
        long long fn = f1 + f2;
        if (fn == n) return 1;
        f2 = f1;
        f1 = fn;
    }
    return 0;
}

int tongcs(long long n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int nt(long long n){
    if ( n < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) return 0;
        }
    }
    return 1;
}

int main(){
    long long n;
    scanf("%lld",&n);
    for (int i = 2; i < n; i++){
        if (nt(i) && checkfibo(tongcs(i))== 1) printf("%d ",i);

    }
}