// stack with switch case
#include <stdio.h>
#define n 5
int a[n];
int top = -1, i, top1 = 0;

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
        printf("Enter element is: %d", val);
    }
}

int finsert(int in)
{
    if (top1 <= n - 1)
        printf("Array is full.....\n");
    else
    {
        ++top;
        a[top1] = in;
        printf("Enter element is: %d", in);
    }
}
int pop()
{
    if (top < 0)
        printf("\nArray is Empty..");
    else
    {
        printf("Enter element is: %d", a[top]);
        --top;
    }
}
int main()
{
    int ch, x;
    printf("1. push:");
    printf("\n2. pop:");
    printf("\n3. first insert:");
    printf("\n9. display:");
    printf("\n0. Exit");

    while (ch != 0)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("Enter element: ");
            scanf("%d", &x);
            push(x);
            break;
        case 9:
            display();
            break;
        case 0:
            break;
        default:
            printf("\nWrong Choice");
        }
    }
}