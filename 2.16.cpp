#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int dem = 0;
	if (n == 0) printf("1");
	else {
	
	while (n > 0 ){
		n /=10;
		dem++;
	}
	printf("%d", dem);
}
	return 0;
}
