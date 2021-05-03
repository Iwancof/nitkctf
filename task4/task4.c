#include<stdio.h>
#include<stdlib.h>

int main() {
  // CTF用の初期化
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stdout, NULL, _IONBF, 0);
  
  int secret = 0; // これならログインできない！
  int array[3] = {1000, 2000, 3000};

  int index, value;

  puts("Enter index");
  scanf("%d", &index);

  puts("Enter value");
  scanf("%d", &value);

  array[index] = value;

  if(secret != 1234) {
    puts("Login failed!!");
  } else {
    char prog_name[256];

    puts("Welcome to super system!");
    puts("Enter program name");
    scanf("%s", prog_name);

    system(prog_name);
  }
}


