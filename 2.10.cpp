#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d\n", &n);
	int check = 0;
	for (int i = 1; i <= n; i++){
		int tamp;
		scanf("%d ", &tamp);
		if (tamp == 2022 ){
			check = 1;
		}
	}
	if (check == 1) {
		printf("YES");
	}
	else printf("NO");
	return 0;
}
