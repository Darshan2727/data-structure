#include <stdio.h>
#include <stdlib.h>
#define n 20
int linearsearch(int a[], int x)
{
    for (int i = 0; i < n; i++)
    {

        if (a[i] == x)
            return i + 1;
    }
    return -1;
}
int main()
{
    int a[n], x;
    for (int i = 0; i < n; i++)
        a[i] = rand() % 11;
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    printf("\n Enter search Element:");
    scanf("%d", &x);

    int b = linearsearch(a, x);
    if (b < 0)
        printf("Search Element is NOT FOUND...");
    else
        printf("Search Element is at %d position FOUND...", b);
}