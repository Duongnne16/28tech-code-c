#include<stdio.h>

int main(){
	double tong=0;
	int n;
	scanf("%d", &n);
	for (int i= 2 ;i <= 2*n ; i +=2){
		
		tong = tong + (double) 1/i ;
	}
	printf("%.5lf", tong);
	return 0;
}

