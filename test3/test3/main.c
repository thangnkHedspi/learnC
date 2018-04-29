//test 3
#include <stdio.h>

int main (){
    char name[20];
    printf("nhap ho ten ban:");
    
    scanf("%s", &name);
    printf("ho ten ban la: %s\n", name);
    int i;
    while (name[i] != '\0') {
        i++;
    }
    printf("so ky tu la: %d\n", i);
    return 0;
}

