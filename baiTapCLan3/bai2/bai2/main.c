//Lan 2 - Bai 2

#include <stdio.h>

int main () {
    
    printf("nhap so nguyen m va n: ");
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1 ; i <= m; i++) {
        for (int j = 1; j<=n; j++) {
            if (i>=2 && j>=2 && i<m && j<n) {
                printf("   ");
            } else {
                printf(" * ");
            }
        }
        printf("\n");
    }
}
