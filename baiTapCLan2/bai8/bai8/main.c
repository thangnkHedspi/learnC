#include "stdio.h"

int main(){
    int a, b, ucln = 0, k, l, bcnn;
    printf("nhap 2 so nguyen duong a, b: ");
    scanf("%d%d", &a, &b);
    if (a==b) {
        printf("uoc chung lon nhat la %d\n", a);
        printf("boi chung nho nhat la %d\n", b);
    }
    if (a<b) {
        for (int i=1; i<=a; i++) {
            if (a%i==0 && b%i==0) {
                ucln = i;
            }
        }
        for (k=b; ; k++) {
            if (k%a==0 && k%b==0) {
                bcnn = k;
                break;
            }
        }
        printf("uoc chung lon nhat la: %d\n", ucln);
        printf("boi chung nho nhat la: %d\n", bcnn);
    }
    if (a>b) {
        for (int j=1; j<=b; j++) {
            if (a%j==0 && b%j==0) {
                ucln = j;
            }
        }
        for (l=a; ; l++) {
            if (l%a==0 && l%b==0) {
                bcnn = l;
                break;
            }
        }
        printf("uoc chung lon nhat la: %d\n", ucln);
        printf("boi chung nho nhat la: %d\n", bcnn);
    }
}
