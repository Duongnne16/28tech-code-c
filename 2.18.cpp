#include<stdio.h>
#include<math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int dem = 0;
	while (n != 0 ){
		int tamp = n % 10;
		if (tamp == 2 || tamp == 3 || tamp == 5 || tamp == 7){
			n/= 10;
			dem++;
		}
		else {

			n/=10;
		}
	}
	printf("%d", dem);

	return 0;
}
