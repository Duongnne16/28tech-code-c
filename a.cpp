#include <stdio.h>
#include <math.h>
int main(){
	int n,s;
	scanf("%d %d ", &n, &s);
	if (s % n ==0) {
		printf("%lld", 1ll*s/n);
	}
	if (s % n != 0) {
		printf("%lld ", 1ll*(s/n)+1 );
	}
	return 0;
}
