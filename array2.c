#include <stdio.h>
#define n 10
int main()
{
  int a[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, i, temp;
  temp = a[0];
  a[0] = a[n - 1];
  a[n - 1] = temp;

  for (i = 0; i < n; i++)
    printf("%d ", a[i]);
}