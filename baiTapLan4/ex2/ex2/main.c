//Lan 4 - bai 02

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
        for (int i = r ; i > l; i--) {
            if (a[i]< a[i-1]) {
                int tmp = a[i];
                a[i] = a[i-1];
                a[i-1] = tmp;
                m = i;
            }
        }
        l = m;
        for (int j = l; j < r; j++) {
            if (a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
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
    scanf("%d", &n);
    int a[n];
    
    nhapMang(a, n);
    shakerSort(a, n);
    xuatMang(a, n);
    printf("\n");
    
}
