#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d", &a , &b , &c);
	if (a == 0 && b != 0){
		printf("%.2lf", (double)-c/b);
	}
	else if (a == 0 && b == 0 & c != 0){
		printf("VO NGHIEM");
	}
	else if (a == 0 && b == 0 & c == 0){
		printf("VO SO NGHIEM");
	}
	else {
		long long  denta = b * b - 4 * a * c;
		if (denta < 0) {
			printf("VO NGHIEM");
		}
		else if (denta == 0) {
			printf(".2lf", - b/(2*a));
		}
		else {
			double x1 = (-b - sqrt(denta)) / (2*a), x2 = (-b + sqrt(denta)) / (2*a);
			printf("%.2lf %.2lf", x1,x2);
		}
	}
	return 0;
}
