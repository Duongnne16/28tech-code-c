#include <stdio.h>

int main(){
	int n,m,a;
	scanf("%d %d %d", &n,&m,&a);
	if (n%a == 0 && m%a ==0){
		printf ("%lld", 1ll*n/a * m/a);
	}
	else if (n%a == 0 && m%a !=0){
		printf ("%lld", 1ll*n/a * (m/a+1));
	}
	else if (n%a != 0 && m%a ==0){
		printf ("%lld", 1ll*(n/a+1) * m/a);
	}
	else printf("%lld", 1ll*(n/a+1)*(m/a+1));
}
