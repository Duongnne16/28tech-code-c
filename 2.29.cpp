#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	long long tong = 0;
	for (int i = 1; i <= n; i++){
		int a;
		scanf("%d", &a);
		if (a % 2 == 0) tong += a;
	}
	printf("%lld", tong);
	return 0;	
}
