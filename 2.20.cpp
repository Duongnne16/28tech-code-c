#include<stdio.h>
#include<math.h>

int main(){
	int  n;
	scanf("%d", &n);
	int dem = 0;
	if ( n == 1){
		printf("-1");
	}
	else {
			printf("%d\n", n/2);
		while(n > 1 || n == 3){
				
			if (n == 3) {
				printf("3 ");
			}
			else printf("2 ");
				n -= 2;
		}
	}
	return 0;
}
