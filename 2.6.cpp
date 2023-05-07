#include<stdio.h>
#include<math.h>
int main(){
	long long tong=0;
	long long n;
	scanf("%lld", &n);
	for (long long i= 1 ;i <= sqrt(n) ; i++){
		if (n % i == 0){
			if (i * i == n){
				tong = tong + i;
			}
			else {
			
			tong = tong + i + (n/i);
		}
		}

	}
	printf("%lld", tong);
	return 0;
}

