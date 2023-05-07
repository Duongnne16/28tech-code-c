#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	float tong = 1;
	for (int i = 1; i <= n-1; i++){
		int gt = 1;
		for (int j = 1; j <= i; j++){
			gt *= j;
		}
		tong = tong + (float)1/gt;
	}
	printf("%.4f", tong);
	return 0;
}
