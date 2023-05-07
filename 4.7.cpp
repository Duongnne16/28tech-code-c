#include <stdio.h>

int main() {
    char title[100];
    char isbn[30];
    int quantity;
    float price, you_pay, total,vat;
	
	printf("Enter title: ");
    scanf("%[^\n]s", title);
    
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    
    printf("Enter ISBN: ");
    scanf("%s", isbn);
    
    printf("Enter price: ");
    scanf("%f", &price);
	
	total = quantity * price;
	vat = total * 0.04;
    you_pay = total + vat;

    printf("BK Bookseller\n");
    printf("Qty   ISBN                Title                          Price      Total\n");
    printf("_________________________________________________________________________\n");
    printf("%d    %s   %s                             %.2f       %.2f\n",quantity,isbn,title,price,total);
    printf("VAT                                                                 %.2f\n",vat);
    printf("You pay:                                                            %.2f",you_pay);
  

    return 0;
}
