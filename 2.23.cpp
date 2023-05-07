#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int dem = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", dem);
			++dem;
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1; i <= n; i++){
		int tamp = i;
		for(int j = 1; j <= n; j++){
			printf("%d ", tamp);
			++tamp;
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if (j <= n-i){
				printf("~");
			}
			else printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 1; i <= n; i++){
		int ktao = i;
		int kc = n - 1;
		for(int j = 1; j <= i; j++){
			printf("%d ", ktao);
			ktao += kc;
			kc--;
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
