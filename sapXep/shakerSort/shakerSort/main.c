//thuat toan sap xep shakerSort
//thuat toan cai tien cua phuong phap bubbleSort, cho phan tu nhe nhat noi len va phan tu nang nhat chim xuong

#include <stdio.h>

void nhapMang(int a[], int n){
    printf("nhap mang: ");
    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &a[i]);
    }
}

void shakerSort(int a[], int n){
    int l = 0, r, m;
    r = m = n-1;
    while (l<r) {
        for (int i = r; i>l; i--) {
            if (a[i] < a[i-1]) {
                int tg = a[i];
                a[i] = a[i-1];
                a[i-1] = tg;
                m = i;
            }
        }
        l = m;
        for (int j = l; j < r; j++) {
            if (a[j] >a[j+1]) {
                int tg = a[j];
                a[j] = a[j+1];
                a[j+1] = tg;
                m = j;
            }
        }
        r = m;
    }
}

void xuatMang(int a[], int n){
    for (int i = 0 ; i< n ; i++) {
        printf("%-5d", a[i]);
    }
}

int main (){
    
    int n;
    printf("nhap so luong phan tu mang: ");
    scanf("%d", &n);
    int a[n];
    
    nhapMang(a, n);
    shakerSort(a, n);
    xuatMang(a, n);
    printf("\n");
    
}
