#include <stdio.h>

int main(void) {

  int s1, d1, s2, d2, s3, d3;
  scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

  // Default we need at least one car to complete 3 orders
  int conflict = 0;
  int car = 0;

  if (s1 < d2 && s2 < d1) {
    conflict++;
  }

  if (s2 < d3 && s3 < d2) {
    conflict++;
  }

  if (s3 < d1 && s1 < d3) {
    conflict++;
  }

  if (conflict == 0) {
    car = 1;
  } else if (conflict == 1 || conflict == 2) {
    car = 2;
  } else if (conflict == 3) {
    car = 3;
  }

  printf("%d", car);

  return 0;
}
