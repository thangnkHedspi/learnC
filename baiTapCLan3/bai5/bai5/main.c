//Lan 3 - Bai 5

#include <stdio.h>

int thuanNghich(int i){
    int tg = 0, n = i;
    while (i) {
        tg = tg*10 + i%10;
        i/=10;
    }
    return (tg == n);
}

int chia10(int i){
    int sum = 0;
    while (i) {
        sum += i%10;
        i/=10;
    }
    return (sum % 10 == 0);
}

int main (){
    
    for (int i = 100000; i < 1000000; i++) {
        if (thuanNghich(i) && chia10(i)) {
            printf("%10d\n", i);
        }
    }
}

