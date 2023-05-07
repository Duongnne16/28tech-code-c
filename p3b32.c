#include<stdio.h>
#include<math.h>

int ptsnt(int n, int k){
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            while(n % i == 0){
                dem ++;
                if ( dem == k) return i;
                n /= i;
            }
        }
    }
    if (n != 1){
        dem ++;
        if (dem == k){
            return n;
        }
    }
    return -1;
}

int main(){
    int n,k;
    scanf("%d %d",&n, &k);
    printf("%d", ptsnt(n,k));
}