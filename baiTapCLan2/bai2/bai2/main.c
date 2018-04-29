#include "stdio.h"
int main(){
    int n, i, s=0;
    printf("nhap so tu nhien n: ");
    scanf("%d", &n);
    for (i=0; i<=n; i++) {
        s += i;
    }
    printf("\ntong S= %d\n", s); 
}
