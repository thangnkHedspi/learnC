#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for (int i = 0; i <= 20; i++) {
        int random =1 + rand()%4;
        printf("%5d", random);
    }
    printf("\n");

}

