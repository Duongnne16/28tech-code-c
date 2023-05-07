#include <stdio.h>
#include <math.h>

int main (){
	int n;
	scanf("%d\n",&n);
	int year = n/365;
	n%=365;
	int week= n/7;
	n%=7;
	int day=n;
	printf("%d %d %d",year,week,day);
	return 0;
}
