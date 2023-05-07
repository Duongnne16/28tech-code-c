#include<stdio.h>
#include<math.h>

int scp(long long n){
    long long i = sqrt(n);
    if (i * i == n)
        return 1;
    else return 0;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if (scp(n))
        printf("YES");
    else printf("NO");
}