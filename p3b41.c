#include<stdio.h>
int tn(long long n){
    long long tmp = n, lat = 0;
    while(n){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return tmp == lat;
}
int check(long long n){
    int scuoi = n % 10;
    long long rev = 0; // tinh ra ttu thu 2
    n /= 10;
    while ( n >= 10){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if ((scuoi * 2 == n || n * 2 == scuoi) && tn(rev))
        return 1;
    else return 0;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if (check(n)) printf("YES");
    else printf("NO");
}