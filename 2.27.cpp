#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lld",&n);
	while(n>=10){
		int tamp = 0;
		while(n != 0){
			tamp = tamp + n % 10;
			n /= 10;
		}
		n = tamp;
	}
	printf("%lld", n);	
	return 0;	
}
