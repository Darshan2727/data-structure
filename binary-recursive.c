#include <stdio.h>
#define n 10
int binarysearch(int a[], int l, int h, int x)
{
    if (h >= l)
    {
        int mid = l + (h - l) / 2;
        if (a[mid] == x)
            return mid + 1;
        else if (a[mid] > x)
            return binarysearch(a, l, mid - 1, x);
        else
            return binarysearch(a, mid + 1, h, x);
    }
    return -1;
}
int main()
{
    int i;
    int a[n] = {5, 9, 13, 16, 22, 25, 28, 31, 35, 36};
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    int x, l, h;
    printf("\nEnter Search Element:");
    scanf("%d", &x);

    int b = binarysearch(a, 0, n - 1, x);
    if (b == -1)
        printf("Element is NOT FOUND...");
    else
        printf("Element FOUND at %d position...", b);
    return 0;
}