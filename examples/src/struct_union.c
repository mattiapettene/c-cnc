#include <stdio.h>
#include <stdlib.h>

#define ARY_LEN 6

typedef double data_t;

typedef struct {
  double x, y, z;
} point_t;

typedef union {
  float x, y, z;
  // char str[20];
} my_union;

void point_print(point_t *a) { printf(" %f %f %f \n", a->x, a->y, a->z); }

void print_array(data_t a[], int n) {
  printf("[");
  int i;
  for (i = 0; i < n; i++) {
    printf(" %f ", a[i]);
    a[i] = 7;
  }
  printf("]\n");
}

int main() {

  // point_t pt = {x:0, y:0, z=0}; // OLD VERSION
  point_t pt = {.x = 0, .y = 0, .z = 0};

  point_t *pt_ptr = &pt;
  pt.y = 20;
  pt_ptr->x = 10;

  point_print(pt_ptr);

  my_union another_pt;
  another_pt.x = 10;
  another_pt.y = 20;

  printf("Size of union: %lu\n", sizeof(another_pt));
  printf("Size of pt: %lu\n", sizeof(pt));

  printf("another_pt.x %f\n", another_pt.x);
  printf("another_pt.y %f\n", another_pt.y);

  data_t ary[ARY_LEN] = {10, 2};

  print_array(ary, ARY_LEN);
  print_array(ary, ARY_LEN);

  return 0;
}