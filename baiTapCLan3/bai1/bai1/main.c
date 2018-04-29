//Lan 3 - Bai 1


#include <stdio.h>
int main (){
    int m, n;
    scanf("%d%d", &m, &n);
    
    for (int j=0; j<n; j++) {
        for (int i = 0; i<m ; i++) {
            printf("   *   ");
        }
        printf("\n\n");
    }
}
