// stack with switch case, add element in begining of array
#include <stdio.h>
#define n 5
int a[n];
int top = -1, i, top1 = 0, ii;

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

int fpush(int in)
{
    // if (0 >= n - 1)
    //     printf("Array is full.....\n");
    // else
    // {

    //     a[0] = ++in;
    //     printf("Enter element is: %d",in);
    // }
    if (top >= n - 1)
        printf("Array is full.....\n");
    else
    {
        for (i = n; i > 1; i--)
        {
            a[i - 1] = a[i - 2];
        }
        a[0] = in;
        ++top;
        //   for(i=0;i<n;i++);
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
int fpop()
{
    if (top < 0)
        printf("\nArray is Empty..");
    else
    {
        // a[0]=a[i];
        // printf("Enter element is: %d",a[i]);
        // --i;
        // --top;
        printf("Enter element is: %d", a[0]);
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }

        --top;

        //   a[0]= ii;

        //   for(i=0;i<n;i++);
        //   printf("Enter element is: %d",a[top]);
        //   --top;
    }
}
int main()
{
    int ch, x, y;
    printf("1. push:");
    printf("\n2. pop:");
    printf("\n3. first insert:");
    printf("\n4. first delete:");
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
            scanf("%d", &y);
            fpush(y);
            break;
        case 4:
            fpop();
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