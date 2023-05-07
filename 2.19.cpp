#include<stdio.h>
#include<math.h>

int main(){
	int  n;
	scanf("%d", &n);
	int a = n/28;
	int dem = a;
	while (a >= 3){
		dem++;
		a = a-2;
	}
	printf("%d", dem);
	return 0;
}
