// simple
#include <stdio.h>
#define n 5
int a[n];
int f = -1, r = -1, i;
int dis()
{
    if (f < 0)
        printf("Array is Empty.....");
    else
    {
        for (i = f; i <= r; i++)
            printf(" %d", a[i]);
    }
    printf("\n");
}
int insertlast(int val)
{
    if (r >= n - 1)
        printf("Array is Full\n");
    else if (r < 0)
    {
        f = r = 0;
        a[r] = val;
    }
    else
    {
        a[++r] = val;
    }
}
int delete()
{
    if (f < 0)
    {
        printf("Array is already EMPTY\n");
    }
    else if (f == r)
        f = r = -1;
    else
    {
        f++;
    }
}
int main()
{
    insertlast(10);
    insertlast(20);
    insertlast(30);
    insertlast(40);
    insertlast(50);
    dis();

    delete ();
    delete ();
    delete ();
    delete ();
    delete ();
    delete ();

    dis();
}