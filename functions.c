#include <stdio.h>

// C functions are simple, but because of how C works, the power of functions is a bit limited.

//     Functions receive either a fixed or variable amount of arguments.
//     Functions can only return one value, or return no value.

// In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. To do that, we must use pointers, which are taught later on.

// Functions are defined using the following syntax:

// int foo (int bar) {
//     return bar * 2;
// }


// The function foo we defined receives one argument, which is bar. The function receives an integer, multiplies it by two, and returns the result. 

// To execute the function foo with 1 as the argument bar, we use the following syntax:
// int main() {
//     foo(1);
// }

//In C, functions must be first defined before they are used in the code. They can be either declared first and then implemented later on using a header file or in the beginning of the C file, or they can be implemented in the order they are used (less preferable).

//proper declaration example

/* function declaration */
// int foo(int bar);

// int main() {
//     /* calling foo from main */
//     printf("The value of foo is %d", foo(1));
// }

// int foo(int bar) {
//     return bar + 1;
// }

// void example
void moo() {
    printf("This doesnt return a value to main due to the void keyword!");
}

int main() {
    moo();
}
