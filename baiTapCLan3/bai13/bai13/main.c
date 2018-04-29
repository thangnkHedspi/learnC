//Lan 3 - Bai 13

#include <stdio.h>

int thuanNghich(int n){
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
int cs068(int n){
    int tg = 0;
    while (n) {
        tg = n%10;
        n/=10;
        if (!(tg == 0 || tg == 6 || tg == 8)) {
            return 0;
        }
    }
    return 1;
}

int csChiaHet10(int n){
    int sum = 0;
    while (n) {
        sum += n%10;
        n/=10;
    }
    if (sum%10 == 0) {
        return 1;
    }
    return 0;
}

int main (){
    
    for (int i = 1000000; i < 1000000000; i++) {
        if (thuanNghich(i) && cs068(i) && csChiaHet10(i)) {
            printf("%-10d", i);
        }
    }
    printf("\n");
    
}
