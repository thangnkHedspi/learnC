//Lan 3 - Bai 7

#include <stdio.h>

int sum( int n ) {
    int sum = 0;
    while (n) {
        sum += n%10;
        n/= 10;
    }
    return sum;
}

void nt( int m ){
    int i = 2;
    while (i <= m) {
        if (m%i == 0 ) {
            m /= i;
            printf("%d ", i);
        } else {
            i++;
        }
    }
}
int main (){
    int n;
    scanf("%d", &n);
    
    printf("sum = %d\n", sum(n));
    
    printf("n = ");
    nt(n);
    printf("\n");
    
}
