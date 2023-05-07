#include <stdio.h>

int main (){
//  int n;
//	scanf("%d",&n);
//	switch (n) {
//		case 1:
//			printf("Chu nhat");
//			break;
//		case 2:
//			printf("Thu hai");
//			break;
//		case 3:
//			printf("Thu ba");
//			break;
//		case 4:
//			printf("Thu tu");
//			break;
//		case 5:
//			printf("Thu nam");
//			break;
//		case 6:
//			printf("Thu sau");
//			break;
//		case 7:
//			printf("Thu bay");
//			break;
//		default:
//			printf("du kien khong hop le");		
//	}


    int a=100, b=200;
    char kitu;
    scanf("%c", &kitu);
    switch (kitu){
    	case '+' :
    		printf("%d", a+b);
    		break;
    	case '-':
    		printf("%d", a-b);
    		break;
    	case '*':
    		printf("%d", a*b);
    		break;
    	case '/':
			printf("%.2fl\n", (double)a/b);
			break;	
		default:
			printf("Dau khong hop le\n");
	}
	return 0;
}
