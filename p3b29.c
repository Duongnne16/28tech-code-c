#include<stdio.h>

int tn(int n){
    int lat = 0, tmp = n;
    while(n != 0){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if ( lat == tmp) return 1;
    else return 0;
}

int tong(int n){
    int sum = 0;
    while(n!= 0){
        sum += n % 10;
        n /= 10; 
    }
    if (sum % 10 == 8) return 1;
    else return 0;
}

int cs6(int n){
    int dem;
    while(n != 0){
        if (n % 10 == 6) return 1;
        n /= 10;
    }
    return 0;
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int d1,d2,d3;
    for (int i = a; i <= b; i++){
       if (tong(i) && cs6(i) && tn(i)) 
           printf("%d ", i);
       
    }
 

}