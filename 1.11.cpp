#include <stdio.h>
#include <math.h>

int main (){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	
	if (a>0 && b>0 && c>0&& ((a+b)>c && (a+c)>b && (b+c)>a )){
		if (a==b && b==c){
			printf ("1\n");
		}
		else if (a==b || b==c || c==a) {
			printf("2\n");
		}
		else if ((a*a+b*b==c*c)|| (a*a+c*c==b*b)|| (b*b+c*c==a*a)) {
			printf("3\n");
		}
		else printf("4\n");
		
	}
	else printf("INVALID");
}
