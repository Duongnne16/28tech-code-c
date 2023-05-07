#include<stdio.h>
#include<math.h>

int sum(int n){
    int sum1 = 0;
    while(n > 0){
        sum1 += n % 10;
        n /= 10;
    }
    return sum1;
}

int smith(int n){
    int sum2 = 0;
    int tmp = n;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            while(n % i == 0){
              sum2 += sum(i);
              n /= i;  
            }
        }
    }
    if (tmp == n) return 0; // n la snt
    if (n != 1){
        sum2 += sum(n);
    }
    if (sum(tmp)==sum2)
        return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    if (smith(n)) 
        printf("YES\n");
    else printf("NO\n");
}