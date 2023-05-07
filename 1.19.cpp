#include <stdio.h>

int main(){
	int m,n;
	scanf("%d %d", &m,&n);
	if ( n % 2 == 0) {
		printf("%lld", 1ll*n/2*m);
	}
	else {
		printf("%lld", 1ll*n/2*m + m/2);
	}
}
