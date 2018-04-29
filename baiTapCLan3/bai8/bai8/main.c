//Lan 3 - Bai 8

#include <stdio.h>

void chanle(unsigned int n){
    int gt = 0, count1 = 0, count2 = 0;
    while (n) {
        gt = n%10;
        n/=10;
        if (gt % 2 == 0) {
            count1++;
        } else {
            count2++;
        }
    }
    printf("count chan: %d\n", count1);
    printf("count le: %d\n", count2);
}

void sapXep(int n){
    int tang = 1, giam = 1;
    int a, b;
    b = n%10;
    n/=10;
    while (n) {
        a = n%10;
        n/=10;
        if (a<b) {
            giam = 0;
        }
        if (a>b) {
            tang = 0;
        }
        b = a;
    }
    if (tang == 1  ) {
        printf("sx tang \n");
    } else {
        if (giam == 1) {
            printf("sx giam\n");
        } else {
            printf("khong tang giam\n");
        }
    }
}

int main (){
    
    printf("nhap so nguyen duong n: ");
    unsigned int n;
    scanf("%u", &n);
    
    chanle(n);
    
    sapXep(n);
}
