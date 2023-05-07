#include<stdio.h>
#include<math.h>


int snt(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if ( n % i == 0){
            return 0;
        }
    }
    return 1;
}

int tong(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if (snt(sum)) return 1;
    else return 0;
}


int csnt(int n){
   
    while (n){
        int tmp = n % 10;
        if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7){
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main(){
    int a,b;
    int dem = 0;
    scanf("%d %d",&a, &b);
    for(int i = a; i<= b; i++){
        if (csnt(i) && snt(i) && tong(i)){
            ++dem;
        }
    }
    printf("%d", dem);
}