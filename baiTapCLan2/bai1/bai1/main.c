#include "stdio.h"
int main(){
    int n, i;
    printf("nhap so tu nhien n ");
    scanf("%d", &n);
    printf("\nso chan nho hon n la: ");
    for (i=0; i<n; i++) {
        if (i%2==0) {
            printf("%5d", i);
        }
    }
    printf("\nso le nho hon n la: ");
    for (i=0; i<n; i++) {
        if (i%2==1) {
            printf("%5d", i);
        }
    }
    printf("\n");
}
