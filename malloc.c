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
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        temp->next = NULL;
        return;
    }
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
    return;
}
void delete()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
        printf("\nList is Already Empty....");
    else if (ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        free(ptr);
    }
    return;
}
int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    display();
    delete ();
    delete ();

    display();
}