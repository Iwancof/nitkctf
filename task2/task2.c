#include<stdio.h>
#include<stdlib.h>

int main() {
  // CTF用の初期化
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);

  long array[3] = {10, 20, 30};
  long index;
  long value;

  puts("Enter index");
  scanf("%ld", &index);

  puts("Enter value");
  scanf("%ld", &value);

  array[index] = value;

  for(int i = 0;i < 3;i++) {
    printf("array[%d] = %ld\n", i, array[i]);
  }
}


