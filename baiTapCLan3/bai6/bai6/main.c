//Lan 3 - Bai 6

#include <stdio.h>

int main (){
    
    printf("nhap 2 so nguyen duong a va b (a<=b): ");
    unsigned int a, b;
    scanf("%u%u", &a, &b);
    
    for (int i = a; i<= b ; i++) {
        for (int j = i; j <= b; j++) {
            int count = 0;
            for (int k = 2; k<=i; k++) {
                if (i%k == 0 && j%k == 0) {
                    count = 1;
                    break;
                }
            }
            if (count == 0) {
                printf("%d va %d\n", i, j);
            }
        }
    }
}
