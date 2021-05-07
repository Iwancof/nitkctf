#include<stdio.h>
#include<stdlib.h>

void call_me() {
  system("/bin/sh");
}

int main() {
  // CTF用の初期化
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);

  puts("It's task8");

  long array[3] = {0x1, 0x2, 0x3};

  for(int i = 0;i < 20;i++) {
    printf("array[%d] = 0x%lx\n", i, array[i]);
  }

  puts("");

  int index;
  long value;

  puts("Enter index");
  scanf("%d", &index);

  puts("Enter value(hex)");
  scanf("%lx", &value);

  array[index] = value;
}




