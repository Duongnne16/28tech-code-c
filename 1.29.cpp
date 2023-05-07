#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (b%a == 0){
		int tamp = b/a;
		if (b * tamp == c && c* tamp == d) {
			printf("YES");
		}
	}
	else printf("NO");
	return 0;
}
