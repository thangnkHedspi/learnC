//Lan 3 - Bai 14

#include <stdio.h>
#include <math.h>

int NT(int n){
    for (int i =2 ; i<= sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int csLaNT(int n){
    int tg = 0;
    while (n) {
        tg = n%10;
        n/=10;
        if (!(NT(tg))) {
            return 0;
        }
    }
    return 1;
}

int daoLaNT(int n){
    int tg = 0;
    while (n) {
        tg = tg*10 + n%10;
        n/=10;
    }
    if (NT(tg)) {
        return 1;
    }
    return 0;
}

int main (){
    
    for (int i = 1000000; i < 10000000; i++) {
        if (NT(i) && csLaNT(i) && daoLaNT(i)) {
            printf("%-10d", i);
        }
    }
    
}
//done
