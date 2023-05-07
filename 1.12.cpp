#include <stdio.h>
#include <math.h>

int main(){
	int t,n;
	scanf("%d %d",&t, &n);
	if (t>0 &&  t< 13 && n>0){
		if (t ==2 && (n% 400 == 0 || (n%4==0 && n%100!=0))){
			printf ("29");
		}
		else if (t==1) printf("31");
		else if (t==2) printf("28");
		else if (t==3) printf("31");
		else if (t==4) printf("30");
		else if (t==5) printf("31");
		else if (t==6) printf("30");
		else if (t==7) printf("31");
		else if (t==8) printf("31");
		else if (t==9) printf("30");
		else if (t==10) printf("31");
		else if (t==11) printf("30");
		else if (t==12) printf("31");
	}
	else printf ("INVALID");
}
