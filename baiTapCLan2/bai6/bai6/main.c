#include "stdio.h"
int main (){
    printf("nhap so tu nhien n ");
    int n, sum=0;
    scanf("%d", &n);
    for (int i=0; i<=n; i++) {
        if (i%7==0) {
            sum+=i;
        }
    }
    printf("sum= %d\n", sum);
}
