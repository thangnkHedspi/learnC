//Lan 2 - Bai 18
#include <stdio.h>

int main (){
    printf("nhap so c>0 ");
    float c;
    scanf("%f", &c);
    float pi = 0 ;
    int n = 0, s = 1;
    while (1) {
        pi += s*1.0/(2*n+1);
        ++n;
        s *= -1;
        if (1.0/(2*n+1) <= c ) {
            break;
        }
    }
    pi *= 4;
    printf("pi = %f\n ", pi);
}
