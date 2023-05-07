#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	if ((a+b+c+n) % 3 == 0){
		int res = (a+b+c+n) / 3;
		if (res >= a && res >= b && res >= c){
			printf("YES");	
		}
		else {
			printf("NO");
		}
	} else printf("NO");
	return 0;
}
