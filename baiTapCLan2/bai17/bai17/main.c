#include "stdio.h"
int main (){
    printf("nhap 2 so nguyen m, n: ");
    int m, n, k;
    scanf("%d%d", &m, &n);
    if (m == n ) {
        printf("khong nguyen to cung nhau\n");
    }
    if (m>n) {
        for (int i = 1 ; i <= n; i++) {
            if (m%i==0 && n%i==0) {
                k = i;
            }
        }
    } else {
        for (int i = 1 ; i <= m; i++) {
            if (m%i==0 && n%i==0) {
                k = i;
            }
        }
    }
    if (k == 1) {
        printf("m, n nguyen to cung nhau\n");
    } else {
        printf("m, n khong nguyen to cung nhau\n");
    }
}
