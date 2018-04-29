#include "stdio.h"
int main (){
    int n;
    printf("nhap so n: ");
    scanf("%d", &n);
    int F0 = 1, F1 = 1;
    int Fn = 1;
    for (int i = 1; i <= n ; i++) {
        Fn = F1 + F0;
        F0 = F1;
        F1 = Fn;
    }
    printf("F%d = %d\n", n, Fn);
}
