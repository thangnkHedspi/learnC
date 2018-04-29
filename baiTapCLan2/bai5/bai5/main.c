#include "stdio.h"
int main (){
    printf("nhap so tu nhien n ");
    int n, s=0, i, k=1;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        k = k*i;
        s+=k;
    }
    printf("\ns= %d\n", s);
}
