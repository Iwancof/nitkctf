#include<stdio.h>

void inner() {
  puts("Inner!!");
}

void caller1() {
  puts("caller1: start");
  inner();
  puts("caller1: end");
}

void caller2() {
  puts("caller2: start");
  inner();
  puts("caller2: end");
}


int main() {

  caller1();
  caller2();

}
