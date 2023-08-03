#include <stdio.h>

int main() {
    //initilize values
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  //needed to do for loop involving array
  int i;

    //for each value in array, times with factorial
  for(i=0; i < 10; i++) {
    factorial *= array[i];
  }

  printf("10! is %d.\n", factorial);
}