#include <stdio.h>

int main(void) {
  int i = 10;
  for (i; i > 0; i--) {
    printf("Hello! %d", i);
  }
  return 0;
}