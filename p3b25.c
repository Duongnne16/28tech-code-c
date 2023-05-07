#include<stdio.h>
#include<math.h>

int ktra(long long n){
    int i = sqrt(n);
    if (i * i == n)
        return 1;
    else 
        return 0;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if (ktra(n))
        printf("YES");
    else 
        printf("NO");
    return 0;
}