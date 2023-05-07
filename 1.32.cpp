#include<stdio.h>
#include<math.h>
int main(){
	int k2,k3,k5,k6;
	scanf("%d %d %d %d", &k2, &k3,&k5,&k6);
	int b = fmin(k2,fmin(k5,k6));
	int a = fmin(k3, k2 - b);
	long long tong = 1ll*256*b+1ll*32*a;
	printf("%lld", tong);
	return 0;
}
