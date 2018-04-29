//Lan 3 - Bai 12

#include <stdio.h>
#include <math.h>

//funtion tim so nguyen to
int NT( int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

//funtion tong cac chu so cua n la 1 so nguyen to
int tongNT(int n){
    int sum = 0;
    while (n) {
        sum += n%10;
        n /=10;
    }
    if (NT(sum)) {
        return 1;
    }
    return 0;
}

//funtion cac chu so tu trai qua phai tao thanh day khong giam
int khongGiam(int n){
    int a, b;
    b = n%10;
    n /= 10;
    while (n) {
        a = n%10;
        n /= 10;
        if (a > b) {
            return 0;
        }
        b = a;
    }
    return 1;
}

int main (){
    
    for (int i = 1000000; i<10000000; i++) {
        if (NT(i) && tongNT(i) && khongGiam(i)) {
            printf("%-10d", i);
        }
    }
    printf("\n");
    
}
