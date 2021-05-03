#include<stdio.h>
#include<stdlib.h>

int main() {
  // CTF用の初期化
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);

  char prog_name[256];

  puts("Enter program name");
  scanf("%s", prog_name);

  system(prog_name);
}


