#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int tong = 0;

	while (n > 0 ){
		
		tong += n % 10;
		n /=10;
	}
	printf("%d", tong);

	return 0;
}
