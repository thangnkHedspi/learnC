#include "stdio.h"
int main(){
    printf("nhap so nguyen n: ");
    int n, count=0;             //count la bien dem
    scanf("%d", &n);
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            count++;
        }
    }
    if (count>1) {
        printf("n khong la so nguyen to\n");
    } else {
        printf("n la so nguyen to\n");
    }
}
