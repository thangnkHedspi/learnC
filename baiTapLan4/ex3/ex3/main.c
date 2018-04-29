//Lan 4 - Bai 3

#include <stdio.h>

void nhapMang(int a[], int n){
    printf("nhap mang: ");
    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &a[i]);
    }
}
int kiemTra(int a[], int n){
    int dem = 0;
    for (int i = 0 ; i < n; i++) {
        if (a[i] == a[i+1]) {
            dem++;
        }
    }
    return dem;
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
    xuatMang(a, n);
    printf("\n");
    printf("so luong cap lien tiep bang nhau la: %d ", kiemTra(a, n));
    printf("\n");
    
}
