#include "stdio.h"
int main(){
    printf("nhap so tu nhien n ");
    int n, i, s=0, s1=0, s2=0;
    scanf("%d", &n);
    for (i=0; i<=n; i++) {
        s += i;
    }
    printf("tong s= %d", s);
    for (int j=0; j<=n; j++) {
        if (j%2==1) {
            s1+=j;
        }
    }
    printf("\ns1 = %d", s1);
    for (int k=0; k<=n; k++) {
        if (k%2==0) {
            s2+=k;
        }
    }
    printf("\ns2= %d\n", s2);
}
