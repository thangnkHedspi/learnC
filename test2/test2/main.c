//switch - case
#include "stdio.h"
int main (){
    printf("======MENU======\n1. Cong hai so nguyen.\n2. Tru hai so nguyen.\n3. Nhan hai so nguyen.\n4. Chia nguyen hai so nguyen.\n5. Chia du hai so nguyen.\n0. Thoat\nBan chon?");
    int luaChon;
    scanf("%d", &luaChon);
    switch (luaChon) {
        case 0: break;
        case 1:{
            printf("nhap 2 so nguyen ");
            int a, b;
            scanf("%d%d", &a, &b);
            printf("\n%d + %d = %d\n", a, b, a+b);
            break;
        }
        case 2:{
            printf("nhap 2 so nguyen ");
            int a, b;
            scanf("%d%d", &a, &b);
            printf("\n%d - %d = %d\n", a, b, a-b);
            break;
        }
        case 3:{
            printf("nhap 2 so nguyen ");
            int a, b;
            scanf("%d%d", &a, &b);
            printf("\n%d * %d = %d\n", a, b, a*b);
            break;
        }
        case 4:{
            printf("nhap 2 so nguyen");
            int a, b;
            scanf("%d%d", &a, &b);
            printf("\n%d / %d = %d\n", a, b, a/b);
            break;
        }
        case 5:{
            printf("nhap 2 so nguyen");
            int a, b;
            scanf("%d%d", &a, &b);
            printf("%d chiadu %d = %d\n", a, b, a%b);
            break;
        }
    }
}
