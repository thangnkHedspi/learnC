//test mang

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

int main (){
    
    srand(time(NULL));
    int a[MAX];
    
    for (int i = 0 ; i < MAX; i++) {
        a[i] = rand()%100;
    }
    
    for (int i = 0; i < MAX; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
}
