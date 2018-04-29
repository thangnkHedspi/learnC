//Week 4 - Bai 7

#include <stdio.h>

int main (){
    
    printf("Nhap so luong sach mua: ");
    int n;
    scanf("%d", &n);
    
    printf("nhap ma so: ");
    char key[10] = {'\0'};
    scanf("%s", key);
    
    printf("nhap ten sach: ");
    char name[10] = {'\0'};
    scanf("%s", name);
    
    printf("gia sach: ");
    int price;
    scanf("%d", &price);
    
    printf("BK Bookseller\n\n\n");
    printf("%-10s%-10s%-30s%-30s%-30s\n", "Qty", "ISBN", "Title", "Price" , "Total");
    printf("%-10d%-10s%-30s%-30d%-30d\n\n", n, key, name, price, n*price );
    
    printf("VAT: 4%%\n\n");
    printf("You Pay: %g\n", n*price*1.04);
    
}

