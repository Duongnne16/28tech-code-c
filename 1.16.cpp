#include <stdio.h>

int main(){
	char kitu;
	scanf("%c",&kitu);
	if ((kitu=='Z') || (kitu=='z')) {
		printf("a");
	}
	else if ((kitu>='A')&&(kitu<'Z')){
		kitu+=33;
		printf("%c",kitu);
	}
	else {
		kitu+=1;
	 printf("%c",kitu);}
}
