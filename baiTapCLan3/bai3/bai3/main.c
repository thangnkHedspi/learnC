//Lan 3 - Bai 3

#include <stdio.h>

int main (){
    
    printf("nhap h: ");
    int h;
    scanf("%d", &h);
    
    for (int i = 1; i<=h; i++) {
        for (int j = 0; j<i; j++) {
            printf(" * ");
        }
        printf("\n");
    }
}
