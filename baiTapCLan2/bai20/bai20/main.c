//Lan 2 - Bai 20

#include <stdio.h>
#include <math.h>

unsigned long long gt(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n*gt(n-1);
    }
}

int main (){
    
    float c, x, sinx = 0;
    scanf("%f%f", &c, &x);
    int i = 0, s = 1;
    while (1) {
        sinx += s*pow(x, 2*i+1)/gt(2*i+1);
        if (( x > 0 && pow(x, 2*i+1)/gt(2*i+1) <= c) || ( x <0 && -pow(x, 2*i+1)/gt(2*i+1) <= c)) {
            break;
        }
        s *= -1;
        i++;
    }
    printf("sinx = %f\n", sinx);
    printf("%f\n", sinf(x));
    return 0;
}
