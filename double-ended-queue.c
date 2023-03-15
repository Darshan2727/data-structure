// Double ended queue
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
int insertfirst(int aa)
{
    if (f==0)
        printf("Not Insert at that time\n");
    else if (f<0)
    if (f>=n-1)
        printf("Array is Full\n");
    else if (f==r)
    {
        r=f=0;
         a[f]=aa;
    }    
    else 
    {
        a[--f]=aa;
       
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
int deletelast()
{
    if(r < 0)
    {
        printf("Array is Already Empty\n");
    }
    else if(r == f)
        f=r=-1;
    else 
    {
        r--;
    }    
}
int main()
{
   int ch, x,y;
    printf("1. First Insert:");
    printf("\n2. Last Insert:");
    printf("\n3. First delete:");
    printf("\n4. Last Delete:");
    printf("\n9. Display:");
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
            insertfirst(x);
            break;
        case 2:
            printf("Enter element: ");
            scanf("%d", &y);
            insertlast(y);
            break;
        case 3:
            delete();
            break;
        case 4:
            deletelast();
            break;
        case 9:
            dis();
            break;
        case 0:
            break;
        default:
            printf("\nWrong Choice");
        }
    }
}           