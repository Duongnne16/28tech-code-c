#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
//	int to100 = n/100;
//	int to20 = (n % 100) / 20;
//	int to10 = (n - 100 * to100 - to20 * 20) / 10;
//	int to5 = (n - 100 * to100 - to20 * 20 - to10*10) /5;
//	int to1 = n - 100 * to100 - to20 * 20 - to10*10 - to5*5;
//	printf("%d",to100  + to20 + to10 + to5 + to1);

//cach 2
	int res = 0;
	res += n / 100; n %= 100;
	res += n / 20; n %= 20;
	res += n/ 10; n %= 10;
	res += n/5; n %= 5;
	res += n;
	printf ("%d", res);
	return 0;
}
