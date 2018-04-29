#include "stdio.h"
int main(){
    printf("ban can in ra bao nhieu so nguyen to dau tien: ");
    int n, count = 0, i = 2;
    scanf("%d", &n);
    while (count<n) {
        int d = 1;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                d = 0;
                break;
            }
        }
        if (d == 1) {
            printf("%5d\n", i);
            count++;
        }
        i++;
    }
}
