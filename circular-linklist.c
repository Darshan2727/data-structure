#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
        printf("\nList is Empty....");
    while (ptr->next != head)
    {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf(" %d", ptr->data);
    printf("\n");
}
void firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = head;
        head = temp;
    }
    return;
}
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = head;
    }
    return;
}
void insertmid(int bb, int pos)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = bb;
    struct node *prev;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
    return;
}
void firstdelete()
{
    struct node *ptr = head;
    struct node *prev=head;

    if (head == NULL)
        printf("\nList is Already Empty....");
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = head->next;
        head = prev->next;
        free(prev);
    }
    return;
}
void middelete(int pos)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);

    return;
}
void delete()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
        printf("\nList is Already Empty....");
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = head;
        free(ptr);
    }
    return;
}
int main()
{
    int ch, x, y;
    printf("1.First Insert:");
    printf("\n2.Mid Insert:");
    printf("\n3.Last Insert:");
    printf("\n4.First Delete:");
    printf("\n5.Mid Delete:");
    printf("\n6.Last Delete:");
    printf("\n9.Display:");
    printf("\n0.Exit....");
    while (ch != 0)
    {
        printf("\n Enter Your Choice:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Element:");
            scanf("%d", &x);
            firstinsert(x);
            break;

        case 2:
            printf("Enter Element And Data:");
            scanf("%d %d", &x, &y);
            insertmid(x, y);
            break;

        case 3:
            printf("Enter Element:");
            scanf("%d", &x);
            insertend(x);
            break;

        case 4:
            firstdelete();
            break;

        case 5:
            printf("Enter Data:");
            scanf("%d", &x);
            middelete(x);
            break;

        case 6:
            delete ();
            break;

        case 9:
            display();
            break;

        case 0:
            break;

        default:
            printf("\n WRONG choice:");
        }
    }
}