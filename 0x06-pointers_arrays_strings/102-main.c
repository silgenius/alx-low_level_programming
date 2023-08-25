#include <stdio.h>

int main(void)
{
  int *j;
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p - 3) = 98;
  printf("%p\n", &p);
  printf("%p\n", &p[1]);
  printf("%p\n", &p[2]);
  printf("%p\n", &p[3]);
  printf("%p\n", &p[4]);
  printf("%p\n", &p[5]);
  printf("-------------\n");
  printf("%p\n", &a[2]);
  printf("%p\n", &j);
}
