#include <stdio.h>

int main(){
	char kitu;
	scanf("%c",&kitu);
	if (kitu>='A' && kitu <= 'Z') {
		printf("UPPER");
	}
	else if (kitu >= 'a' && kitu <= 'z'){
		printf("LOWER");
	}
	else if (kitu >= '0' && kitu <= '9'){
		printf("DIGIT");
	}
	else {
	 printf("SPECIAL");}
}
