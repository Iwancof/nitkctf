#include<stdio.h>

int main() {
  int value1 = 1234;
  int value2 = 5678;
  int array[3] = {100, 200, 300};

  printf("%p\n", &value1);
  printf("%p\n", &value2);
  printf("%p\n", &array);

  printf("value1 = %d, value2 = %d\n", value1, value2);
  // array[(値)] = 0;
  printf("value1 = %d, value2 = %d\n", value1, value2);

}
