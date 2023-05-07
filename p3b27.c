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

int tn(int n){
    int lat = 0, tmp = n;
    while(n != 0){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if (tmp == lat){
        return 1;
    }
    else return 0;
}

int demuocnt(int n){
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++){
        if ( n % i == 0){
            if (snt(i) ) dem++;
            if (i*i != n && snt(n/i)) dem ++;
        }
    }
    if (dem >= 3) return 1;
    else return 0;
}


int main(){
    int a,b,n;
    int dem = 0;
    scanf("%d %d",&a, &b);
    for(int i = a; i<= b; i++){
        if (tn(i) && demuocnt(i)){
            printf("%d ", i); 
            dem ++;
        }
    }
    if (dem == 0) printf("-1");
}