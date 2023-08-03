
#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum;

  sum = a + b + c;
  // whole float
  printf("The sum of a, b, and c is %f.\n", sum);
  // 2 decimals
  printf("The sum of a, b, and c is %.2f", sum);
  return 0;
}