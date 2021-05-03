#include<stdio.h>

void func() {
  puts("[+] func: start");

  long array[3] = {0x10000, 0x20000, 0x30000};
  printf("array located at %p\n", &array);

  
  for(int i = 0;i < 9;i++) {
    printf("array[%d] = 0x%lx\n", i, array[i]);
  }

  puts("[+] func: end");
}


int main() {
  puts("[+] main: start");

  long value1 = 0x1234;
  long value2 = 0x5678;

  printf("value1 located at %p\n", &value1);
  printf("value2 located at %p\n", &value2);

  puts("[+] main: enter func");
  func();
  puts("[+] main: exit func");

  puts("[+] main: end");
}
