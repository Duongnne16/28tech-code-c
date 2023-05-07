#include<stdio.h>
#include<math.h>
void fibo(int n){
    if (n == 1) printf("1");
    else if (n == 2) {
        printf("1\n");
        printf("1\n");
    }
    else {
        printf("1\n");
        printf("1\n");
        long long f1 = 1, f2 = 1;
        for(int i = 3; i<= n; i++){
            long long fn = f1 + f2;
            printf("%lld\n",fn);
            f2 = f1; 
            f1 = fn;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibo(n);

    }
