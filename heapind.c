#include <stdio.h>
#include <stdlib.h>


int main() {
    int a; // goes on stack
    
    int *p;

    p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);
    printf("%d",*p);
    p = (int*)malloc(200000*sizeof(int));

    *p = 20;
    printf("%d",*p);

    free(p);
}