//Lan 3 - Bai 11

#include <stdio.h>
#include <math.h>

int NT(int n){
    for (int i = 2; i<= sqrt(n) ; i++) {
        if (n %i == 0) {
            return 0;
        }
    }
    return 1;
}

int thuanNghich( int n ){
    int tg = 0, m = n;
    while (m) {
        tg = tg*10 + m%10;
        m/=10;
    }
    if (tg == n) {
        return 1;
    }
    return 0;
}

int notCS4(int n){
    int tg = 0;
    while (n) {
        tg = n%10;
        n/=10;
        if (tg == 4) {
            return 0;
        }
    }
    return 1;
}

int main (){
    
    for (int i = 10000; i < 10000000; i++) {
        if (notCS4(i) && NT(i) && thuanNghich(i)) {
            printf("%-10d", i);
        }
    }
    
}

