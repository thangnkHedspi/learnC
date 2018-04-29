#include <stdio.h>
#include <math.h>

int soHoanHao(int n){
    int tg = 0;
    for (int i = 1 ; i < n; i++) {
        if (n%i == 0 ) {
            tg += i;
        }
    }
    if (tg == n) {
        return 1;
    }
    return 0;
}

int main (){
    
    int n;
    scanf("%d", &n);
    
    printf("cac so hoan hao la: ");
    for (int i = 1 ; i < n ; i++) {
        if (soHoanHao(i)) {
            printf("%-5d", i);
        }
    }
    printf("\n");
    
}
