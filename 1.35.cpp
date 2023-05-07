#include<stdio.h>
#include<math.h>
int main(){
	int h,m;
	scanf("%d %d", &h, &m);
	printf("%d", 1440 - h* 60 - m);
	return 0;
}
