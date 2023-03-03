// stack
#include <stdio.h>
#define n 5
int a[n];
int top = -1, i, ch;

int display()
{
    for (i = 0; i <= top; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int push(int val)
{
    if (top >= n - 1)
        printf("Array is full.....\n");
    else
    {
        ++top;
        a[top] = val;
    }
}
int pop()
{
    if (top < 0)
        printf("\nArray is Empty..");
    else
        --top;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();
}
