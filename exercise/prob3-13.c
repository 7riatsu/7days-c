#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 3 + 1;

  printf("数値: %d\n", n);
  if (n == 1) {
    printf("グー\n");
  } else if (n == 2) {
    printf("チョキ\n");
  } else {
    printf("パー\n");
  }
}