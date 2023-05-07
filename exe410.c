#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,tmp;
    printf("Hay nhap phuong trinh bac 2: ");
    scanf("%d%*c%*c%d%d%*c%*c%d",&a,&tmp,&b,&c);
    c = -c;
   
    if(tmp != 2) printf("Khong phai phuong trinh bac 2");
    else{
    int denta = b * b - 4 * a * c;
    if (denta < 0) printf("Phuong trinh vo nghiem");
    else if (denta == 0) printf("Phuong trinh co nghiem kep: %.2f",-b/(2*a));
    else {
        float x1,x2;
        x1 = (-b-sqrt(denta))/(2*a);
        x2 =  (-b+sqrt(denta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f",x1,x2);
    } }
    return 0;
}