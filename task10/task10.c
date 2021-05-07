#include<stdio.h>
#include<stdlib.h>

void call_me() {
  system("/bin/sh");
}

int big(const void *x,const void *y) {
  return *(long*)x < *(long*)y;
}
int small(const void *x, const void *y) {
  return *(long*)x > *(long*)y;
}

int main() {
  // CTF用の初期化
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);

  long array[5];
  int (*fp[2])(const void*, const void*) = {big, small};

  for(int i = 0;i < 5;i++) {
    printf("what is array[%d] ?\n", i);
    scanf("%ld", &array[i]);
  }
  
  int sort_type;
  puts("0: big, 1: small");
  scanf("%d", &sort_type);

  printf("Use function at ... %p\n", fp[sort_type]);
  qsort(array, 5, sizeof(long), fp[sort_type]);

  for(int i = 0;i < 5;i++) {
    printf("array[%d] = %ld\n", i, array[i]);
  }
}




