#include <stdio.h>

int main (){
    
    int n = 10;
    while (1) {
        n--;
        if (n%3!= 0) {
            continue;
        }
        printf("%-5d", n*n);
        if (n<3) {
            break;
        }
    }
    
}

