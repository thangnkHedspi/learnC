//interchange Sort

#include <stdio.h>

void nhapMang(int a[], int n){
    for (int i = 0; i < n; i++) {
        printf("a[%i] = ", i);
        scanf("%d", &a[i]);
    }
}

void interchangeSort(int a[], int n){
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (a[j] < a[i]) {
                int tg = a[j];
                a[j] = a[i];
                a[i] = tg;
            }
        }
    }
}

void xuatMang(int a[], int n){
    for (int i = 0; i<n; i++) {
        printf("%-5d", a[i]);
    }
}

int main (){
    
    int n;
    scanf("%d", &n);
    int a[n];
    
    nhapMang(a, n);
    interchangeSort(a, n);
    xuatMang(a, n);
    printf("\n");
    
}
