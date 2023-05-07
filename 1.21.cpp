#include <stdio.h>

int main(){
	int a,b,k;
	scanf("%d %d %d", &a, &b, &k);
	if (k % 2 ==0) {
		printf("%lld", 1ll*(a-b)*(k/2));
	}
	if (k % 2 != 0) {
		printf("%lld ", 1ll*(a-b)*(k/2)+a);
	}
	return 0;
}
