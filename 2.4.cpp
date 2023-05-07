#include<stdio.h>

int main(){
	double tong=0;
	int n;
	scanf("%d", &n);
	for (int i= 1 ;i <= n ; i++){
		
		tong = tong + (double) 1/i ;
	}
	printf("%.3lf", tong);
	return 0;
}

