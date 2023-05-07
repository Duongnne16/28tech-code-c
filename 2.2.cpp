#include<stdio.h>

int main(){
	long long tong=0;
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		tong = tong + 1ll*i*i;
	}
	printf("%lld", tong);
	return 0;
}

