#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x)
{
   struct node *newNode;
   newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data = x;
   newNode->next=NULL;
   if(front==NULL && rear == NULL)
    front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = rear->next; // rear = newNode;

    }
}
void dequeue()
{
    struct node *temp; temp=front;
    if(front==NULL && rear==NULL)
    printf("undeflow\n");
    else
    {
        printf("The dequeued data is %d",front->data);
        front=front->next;
        free(temp);
        //what if they both are same? if one found zero do you think it would enter other loop than if cz if is the binary and and i hope you know the way of binary multiplication if one become false entire statement becomes false


    }

}

void display()
{
    struct node *temp ; temp=front;
    if(front==NULL && rear==NULL)
    printf("The queue is empty\n");
    else
    {
       while (temp!=NULL)
       {
        printf("%d ",temp->data);
        temp=temp->next;
       }

    }
}
void peek()
{
    if(front==NULL && rear==NULL)
    printf("The queue is empty\n");
    else
    printf("the peek data is: %d",front->data);

}
int main()
{
     enqueue(2);
    enqueue(3);
    enqueue(-1);
    printf("\n");
    display();
        printf("\n");

    peek();
        printf("\n");

    dequeue();
        printf("\n");

    peek();
        printf("\n");

    display();
return 0;
}
