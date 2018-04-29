//Lan 4 - Bai 04

#include <stdio.h>

void nhapMang(int a[], int n){
    printf("nhap mang: ");
    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &a[i]);
    }
}

int demSoX(int a[], int n, int x){
    int dem = 0;
    for (int i = 0 ; i < n ; i++) {
        if (a[i] == x) {
            dem ++;
        }
    }
    return dem;
}

int main (){
    
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    
    nhapMang(a, n);
    printf("so %d xuat hien %d lan.\n", x, demSoX(a, n, x));
    
}

