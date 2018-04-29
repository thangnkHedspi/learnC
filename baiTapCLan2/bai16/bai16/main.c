#include "stdio.h"
#include "math.h"

int main(){
    int m, n, h, count = 0;
    float k;
    printf("nhap 2 so tu nhien m, n: ");
    scanf("%d%d", &m, &n);
    int i = m;
    while (i>=m && i<=n) {
        k = sqrt(i);
        h = sqrt(i);
        if (h == k) {
            count++;
            printf("%d\n", i);
        }
        i++;
    }
    printf("Co %d so chinh phuong\n", count);
}
