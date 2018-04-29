//Lan 2 - Bai 19
#include <stdio.h>
#include <math.h>

unsigned long long gt(int n){
    if (n == 0 || n == 1 ) {
        return 1;
    } else {
        return ( n*gt(n-1));
    }
}

int main () {
    float c, x, res = 0;
    scanf("%f%f", &c, &x);
    int i = 0;
    while (1) {
        res += pow(x, i)/gt(i);
        if (( x>0 && pow(x, i)/gt(i) <= c) || ( x<0 && -pow(x, i)/gt(i) <= c) ) {
            break;
        }
        i++;
    }
    printf("%.10f\n", res);
}
