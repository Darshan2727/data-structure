//        10 20 30 40 50
// o/p => 20 30 40 50 10
#include <stdio.h>
#define n 10
int main()
{
  int a[n] = {100, 20, 30, 40, 50, 60, 70, 80, 90, 10}, i, temp;
  temp = a[0];

  for (i = 0; i < n; i++)
  {
    a[i] = a[i + 1];
  }

  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}
