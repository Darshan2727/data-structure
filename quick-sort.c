#include <stdio.h>
#include <stdlib.h>
#define n 10
int print(int a[])
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
}
int quicksort(int a[], int first, int last)
{
    int pivot, i, j;
    if (first < last)
    {
        print(a);
        pivot = first;
        i = first, j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
                i++;
            while (a[pivot] < a[j])
                j--;
            if (i < j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}
int main()
{
    int a[n] = {70, 50, 40, 90, 80, 100, 10, 30, 20, 60};
    // int a[n];
    // for(int i=0;i<n;i++)
    //     a[i]=rand() % 99+1;
    printf("Before Soting Array:");

    quicksort(a, 0, n - 1);
    printf("\n After Sorting Array:");
    print(a);
}