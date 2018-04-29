//Lan 3 - Bai 9

#include <stdio.h>
#include <math.h>

void lietKe(int n){
    int count = 0;
    for (int i = 1; i<=n; i++) {
        if (n % i == 0) {
            printf("%-5d", i);
            count ++;
        }
    }
    printf("\nso uoc la: %d\n", count);
}

int NT(int n){
    for (int i = 2 ; i <= sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

void uocNT(int n){
        for (int i = 2; i<=n; i++) {
            if (n%i == 0 && NT(i)) {
                printf("%-5d", i);
            }
        }
    }

int main (){
    
    int n;
    scanf("%d", &n);
    
    printf("uoc so cua n la: \n");
    lietKe(n);
    
    printf("uoc so nguyen to la: \n");
    uocNT(n);
    printf("\n");
    
}
