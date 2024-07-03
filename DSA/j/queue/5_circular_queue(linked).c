#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front =NULL;
struct node *rear = NULL;
void enqueue(int x)
{
   struct node *newNode;
   newNode = (struct node*)malloc(sizeof(struct node));
   newNode->data=x;
   newNode->next=NULL;
   if(rear==NULL && front==NULL)
   {
    front=rear=newNode;
    rear->next=front; //for first node
   }
   else
   {
    rear->next = newNode;
    rear=newNode;
    rear->next=front; //for first node
   }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if(front==NULL && rear==NULL)
    printf("Underflow\n");
    else if(front==rear){
    front = rear = NULL;
    free(temp);
    }
    else
    {
        printf("the dequeue data is %d",front->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}
void peek()
{
    if(front==NULL && rear==NULL)
    printf("The queue is empty");
    else
    printf("The peek is %d",front->data);
}
void display()
{
    struct node *temp;
    temp = front;
   if(front==NULL && rear==NULL)
   printf("empty");
   else 
   {
    
    while (temp->next!=front)  
    {
        printf("%d ",temp->data);
        temp=temp->next; 
    }
    printf("%d",temp->data);
    
   }
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

}