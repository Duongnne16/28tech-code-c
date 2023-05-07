#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so dia can mua \n");
	scanf("%d", &n);
	int a[n];
	int tong = 0;
	for (int i = 1; i <= n; i++){
		printf("Nhap so tien cua dia thu %d\n", i);
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		tong += a[i];
	}
	if (tong <= 100){
		printf("Co the mua");
	}
	else printf("Ko the mua");
	return 0;
}
	
