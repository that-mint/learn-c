// A pointer is essentially a simple integer variable which holds a memory address that 
// points to a value, instead of holding the actual value itself. 

// The computer's memory is a sequential store of data, and a pointer points to a specific 
// part of the memory. Our program can use pointers in such a way that the pointers point 
// to a large amount of memory - depending on how much we decide to read from that point on.

//The following line:

//char * name = "John";

//does three things:

    //It allocates a local (stack) variable called name, which is a pointer to a single character.
    //It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
    //It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).

// If we try to access the name variable as an array, it will work, and will return the ordinal value
// of the character J, since the name variable actually points exactly to the beginning of the string.

// Since we know that the memory is sequential, we can assume that if we move ahead in the memory 
// to the next character, we'll receive the next letter in the string, until we reach the end 
// of the string, marked with a null terminator (the character with the ordinal value of 
// 0, noted as \0).
#include <stdio.h>

int main() {
        /* define a local variable a */
    int a = 1;

    /* define a pointer variable, and point it to a using the & operator */
    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

}
