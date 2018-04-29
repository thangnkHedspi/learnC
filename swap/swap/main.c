//Doi cho gia tri trong mang

#include <stdio.h>

void static swap(int a, int b){
    int tg = a;
    a = b;
    b = tg;
    
}

int main (){
    
    int a, b;
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("%d, %d", a, b);
}
