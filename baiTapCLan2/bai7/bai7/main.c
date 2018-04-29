#include "stdio.h"
int main(){
    printf("nhap so tu nhien n ");
    int n, count=0;
    scanf("%d", &n);
    printf("uoc cua %d la: ", n);
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            count++;
            printf("%3d", i);
        }
    }
    printf("\nso uoc la: %d\n", count);
}
