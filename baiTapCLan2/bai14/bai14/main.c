#include "stdio.h"
int main (){
    printf("nhap so tu nhien n: ");
    int n, i = 1;
    scanf("%d", &n);
    int k = n;
    while (i < n) {
        k = k*i;
        i++;
    }
    printf("%d! = %d\n", n, k);
}
