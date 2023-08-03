#include <stdio.h>


int main() {
    int x = 4;

    // * means it is a pointer to an integer, & means the address of.
    // int pointer named pX is set to the address of x
    int *pX = &x;

    // prints the memory value of the int x
    printf("%d\n",pX);

    // dereferences the pointer and prints the value of x
    printf("%d\n",*pX);

    // pointers allow you to access x by reference instead of the value
    // if you want to copy the value of x to a new variable using the pointer.

    int y = *pX;
    printf("%d\n",y);
}

