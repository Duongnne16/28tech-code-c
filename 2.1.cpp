#include<stdio.h>

int main(){
	long long tong=0;
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		tong += i;
	}
	printf("%lld", tong);
	return 0;
}

