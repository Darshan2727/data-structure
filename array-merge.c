#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50}, i;
    int b[] = {15, 25, 35, 45, 55}, j;
    printf("A:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\nB:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", b[i]);
    }
    int c[20];
    for (i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < 5; j++)
    {
        c[i++] = b[j];
    }

    printf("\nAfter Merge:");
    for (j = 0; j < i; j++)
    {
        printf("%d ", c[j]);
    }
}
