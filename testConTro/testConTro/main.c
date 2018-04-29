#include <stdio.h>

void mang(int *x){
    *x = (*x)*(*x)*(*x);
}

int main (){
    
//    int a = 255, b = 120;
//    int *ptr = &a;
//    printf("gia tri cua bien a = %d\n", *ptr);
//    ptr = &b;
//    printf("gia tri cua bien b = %d\n", *ptr);
    
//    int a[] = { 1, 2, 3, 4, 5};
//    int *ptr = a;
//
//    for (int i = 0 ; i < 5; i++) {
//        printf("%-5d", a[i]);
//    }
//
//    printf("\n");
//    for (int i = 0 ; i < 5; i++) {
//        printf("%-5d", *(ptr+i));
//    }
//    printf("\n");
//
//    for (; ptr <= &a[4]; ptr++) {
//        printf("%-5d", *ptr);
//    }
    
    int x = 5;
    printf("%d\n", x);
    
    mang(&x);
    
    printf("%d\n", x);
    
}
