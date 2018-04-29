#include "stdio.h"
int main (){
    int n;
    printf("nhap so nguyen n: ");
    scanf("%d", &n);
    int m = n, k =0;
    if (n < 10) {
        printf("Tong cac chu so = %d\n", m);
    } else {
        while (m > 0) {
            k += m%10;
            m = m/10;
        }
        printf("Tong cac chu so = %d\n", k);
    }
}
