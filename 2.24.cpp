#include<stdio.h>
#include<math.h>
int main(){
	long long a,b;
	scanf("%lld &lld", &a, &b);
	long long gt = 1;
	long long min = fmin(a,b);
	for (long long i = 1; i <= min; i++){
		gt *= i;
	}
	printf("%lld", gt);
	return 0;
}
