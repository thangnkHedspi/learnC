#include "stdio.h"
int main (){
    int n;
    int tg = 0;
    printf("nhap so nguyen n: ");
    scanf("%d", &n);
    int m = n;
    while (m) {
        tg = tg*10 + m%10;
        m/=10;
    }
    if (tg == n) {
        printf("\nn la so thuan nghich\n");
    } else {
        printf("\nn khong la so thuan nghich\n");
    }
}
