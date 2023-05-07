#include<stdio.h>
#include<math.h>

int snt(long long n){
    if (n< 2 ) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int sohh(long long n){
    for(int p = 2; p <= 32; p++){
        if (snt(p)){
            long long tmp = (long long)pow(2, p) -1;
            if(snt(tmp)){
                long long num = (long long)pow(2, p - 1)* tmp;
                if (num == n)
                    return 1;
            }
        }
    }
    return 0;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if (sohh(n)) 
        printf("YES");
    else 
        printf("NO");
}