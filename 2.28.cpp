#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int tong = 0;
	int gt =1;
	for (int i =1; i <= n; i++){
		 gt =1;
		for (int j =1; j <= i; j++){
			gt *= j;
		}
		tong += gt;
	}
	printf("%d", tong);
	return 0;	
}
