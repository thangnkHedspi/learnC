//selection Sort

#include <stdio.h>

void nhapMamg(int a[], int n){
    for (int i = 0; i< n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void selectionSort(int a[], int n){
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int tg = a[i];
        a[i] = a[min];
        a[min] = tg;
    }
}

void xuatMang(int a[], int n){
    for (int i = 0; i< n ; i++) {
        printf("%-5d", a[i]);
    }
}

int main (){
    
    int n;
    scanf("%d", &n);
    int a[n];
    nhapMamg(a, n);
    selectionSort(a, n);
    xuatMang(a, n);
    

}

