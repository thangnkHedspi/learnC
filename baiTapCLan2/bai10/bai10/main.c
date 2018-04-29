#include "stdio.h"
int main (){
    int n, i=2;
    printf("nhap so nguyen n: ");
    scanf("%d", &n);
    printf("\n%d= ", n);
    while (n!=1) {
        if (n%i==0) {
            printf("%5d", i);
            n/=i;
        } else {
            i++;
        }
    }
}
