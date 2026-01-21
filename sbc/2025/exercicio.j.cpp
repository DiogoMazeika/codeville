#include <stdio.h>

int main()
{
  int r = 4;
  int d[10], b[4];
  int a[] = {0, 0, 0, 0, 0};

  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &d[i]);
    if (a[d[i]] == 0) {
      a[d[i]] = 1;
      r--;
    }
  }

  printf("%d", r);

  return 0;
}
