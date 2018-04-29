#include "stdio.h"
int main (){
    int n;
    float i, s=0;
    printf("nhap so tu nhien n ");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        
        s = s + 1/i;
    }
    printf("\nS = %f\n", s);
}

