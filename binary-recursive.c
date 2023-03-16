#include <stdio.h>
#define n 10
#define h=n-1
int binarysearch(int a[], int x,int l,h)
{
    // int l = 0, h = n - 1, mid;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] > x)
            return binarysearch(a,x,l,mid-1);
        // else       
        //     h = mid - 1;
        return binarysearch(a,x,n,mid+1);
    }
    return -1;
}
int main()
{
    int a[n] = {5, 9, 13, 16, 22, 25, 28, 31, 35, 36};
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    int x,l,h;
    printf("\nEnter Search Element:");
    scanf("%d", &x);

    int b = binarysearch(a, x,0,h);
    if (b < 0)
        printf("Element is NOT FOUND...");
    else
        printf("Element FOUND at %d position...", b);
    return 0;    
}