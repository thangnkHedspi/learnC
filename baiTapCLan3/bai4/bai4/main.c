//Lan 4 - Bai 4

#include <stdio.h>

int main (){
    printf("nhap h: ");
    int h;
    scanf("%d", &h);

    for (int i = 0 ; i <= h ; i++) {
        for (int j = 0 ; j <= 2*h; j++) {
            if (j> (h-1-i) && j< (h-1+i)) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}
