#include<stdio.h>
#include<math.h>

int check(int n){
    for (int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        if (n % i == 0){
            while(n % i == 0){
                n /= i;
                mu++;
                if (mu == 2) return 1;
            }
        }
    }
    return 0;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i = a; i <= b; i++){
        if (check(i)){
            printf("%d ",i);
        }
    }
    return 0;
}