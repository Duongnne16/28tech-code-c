#include<stdio.h>
#include<math.h>
int checkfibo(long long n){
    if (n == 0|| n == 1) return 1;
        long long f1 = 1, f2 = 0;
        for(int i = 3; i<= 92; i++){
            long long fn = f1 + f2;
            if (fn == n) return 1;
            f2 = f1; 
            f1 = fn;
        }
 
    return 0;
}
int main(){
    long long n;
    scanf("%lld",&n);
    if (checkfibo(n)) printf("YES");
    else printf("NO");

    }
