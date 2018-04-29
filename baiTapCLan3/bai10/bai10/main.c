//Lan 3 - Bai 10

#include <stdio.h>
#include <math.h>

int NT(int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

void lietKeNT(int n){
    int count = 0, i = 2;
    while (count<n) {
        if (NT(i)) {
            printf("%-5d", i);
            count++;
        }
        i++;
    }
}

long long fibonaci(int n){
    long long f0 = 1, f1 = 1, fn;
    if (n == 0 || n == 1) {
        fn = 1;
    } else {
        for (int i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }
    return fn;
}

void lietKeFibonaci(int n){
    int count = 0;
    int i = 0;
    while (count <= n) {
        printf("%lld  ", fibonaci(i));
        count++;
        i++;
    }
}

int main (){
    
    int n;
    printf("nhap so nguyen n: ");
    scanf("%d", &n);
    
    lietKeNT(n);
    
    lietKeFibonaci(n);
    
}
