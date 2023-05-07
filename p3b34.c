#include<stdio.h>
#include<math.h>
typedef long long ll;
ll ucln(ll a,ll b){
    while(b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll bcnn(ll a, ll b){
    return a * b / ucln (a,b);
}

int main(){
    int x,y,z,n;
    scanf("%d %d %d %d",&x,&y,&z,&n);
    ll bc = bcnn(x,bcnn(y,z));
    ll tmp = (ll)pow(10,n-1);
    ll kq = (tmp + bc - 1) / bc * bc;
    if (kq < pow(10,n) ){
        printf("%lld", kq);
    }
    else printf("-1");
    return 0;
}