#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b;
	scanf("%d%d%d", &a,&b,&n);
	for(int i =1; i <= n/a; i++){
		if ((n - a * i) % b == 0){
			printf("YES");
			return 0;
		}
		
	}
	printf("NO");
}
