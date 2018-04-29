//Sap xep mang - bubbleSort

#include <stdio.h>

void nhapMang(int a[], int n){
    for (int i = 0 ; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void bubbleSort(int a[], int n){
    for (int i = 0 ; i < n-1; i++) {
        for (int j = n-1 ; j > i ; j--) {
            if (a[j] < a[j-1]) {
                int tg = a[j];
                a[j] = a[j-1];
                a[j-1] = tg;
            }
        }
    }
}

void xuatMang(int a[], int n){
    for (int i = 0 ; i < n ; i++) {
        printf("%-5d", a[i]);
    }
    printf("\n");
}

int main (){
    
    int a[20];
    int n;
    scanf("%d", &n);
    
    nhapMang(a, n);
    bubbleSort(a, n);
    xuatMang(a, n);
    
}
