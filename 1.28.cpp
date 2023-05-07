#include<stdio.h>
#include<math.h>
int main(){
	int n,u1,d;
	scanf("%d %d %d", &n,&u1,&d);
	long long tong=(2*u1+1ll*(n-1)*d)*n/2;
	printf("%lld",tong);
}
