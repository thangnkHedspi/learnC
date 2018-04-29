#include <stdio.h>

int main (){
    
    float a, b;
    printf("nhap a va b: ");
    scanf("%f%f", &a, &b);
    
    if (a == 0 && b == 0) {
        printf("phuong trinh vo so nghiem\n");
    } else {
        if (a == 0 && b != 0) {
            printf("phuong trinh vo nghiem");
        } else {
            printf("phuong trinh co nghiem duy nhat la: %g\n", a/b);
        }
    }
    return 0;
}
