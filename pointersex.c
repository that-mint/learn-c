#include <stdio.h>

// Create a pointer to the local variable n called pointer_to_n, and use it to increase 
// the value of n by one

int main() {

    int n = 1;

    printf("%d\n",n);

    int *pointer_to_n = &n;

    *pointer_to_n += 1;

    printf("%d\n",n);

}