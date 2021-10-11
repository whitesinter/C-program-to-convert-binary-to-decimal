#include <math.h>
#include <stdio.h>
int convert(long num);

int convert(long num) {
  int decimal = 0, i = 0, rem;
  while (num != 0) {
    rem = num % 10;
    num /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }
  return decimal;
}

int main() {
  long num;
  printf("Enter any binary number: ");
  scanf("%ld", &num);
  printf("%ld in binary is %d in decimal", num, convert(num));
  return 0;
}
