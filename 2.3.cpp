#include<stdio.h>

int main(){
	long long tong=0;
	int n;
	scanf("%d", &n);
	for (int i= 3 ;i <= n ; i += 3){
		
		tong = tong += i ;
	}
	printf("%lld", tong);
	return 0;
}

