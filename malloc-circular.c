#include <stdio.h>  
#include<stdlib.h>

struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *front=-1;  
struct node *rear=-1;  

void insertlast(int x)  
{  
    struct node *temp=(struct node *)malloc(sizeof(struct node)); 
    temp->data=x;  
    temp->next=0;  
    if(rear==-1)  
    {  
        front=rear=temp;  
        rear->next=front;  
    }  
    else  
    {  
        rear->next=temp;  
        rear=temp;  
        rear->next=front;  
    }  
}  
  
void deletelast()  
{  
    struct node *temp;   
    temp=front;  
    if((front==-1)&&(rear==-1))   
    {  
        printf("\nQueue is empty");  
    }  
    else if(front==rear)  
    {  
        front=rear=-1;  
        free(temp);  
    }  
    else  
    {  
        front=front->next;  
        rear->next=front;  
        free(temp);  
    }  
}  
  
void display()  
{  
    struct node *temp;  
    temp=front;   
    if((front==-1) && (rear==-1))  
    {  
        printf("Queue is empty");  
    }  
  
   
        while(temp->next!=front)  
        {  
            // printf(" %d", temp->data);  
            temp=temp->next;  
        }  
        printf(" %d", temp->data);  
    
}  
  
int main()  
{  
    insertlast(34);   
    insertlast(10);  
    insertlast(23);  
    display();   
    // deletelast();   
    // display();
}  