//in this program we will maintain another pointer : tail 
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
   struct node *prev;
   struct node *next;
    
};
struct node *head , *temp, *tail;
void create (struct node **head)
{
    *head = NULL;
    struct node *newnode;
    int choice = 1;
  while(choice)
  {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head = temp = newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp = temp->next; //temp = newnode;
        tail = temp;
        /*you could maintain only tail pointer
         tail->next=newnode;
        newnode->prev=tail;
        tail = tail->next; 
        
        */
    }
    printf("do you want to continue?(0,1) :");
    scanf("%d",&choice);


  }
}
void display(struct node *head)
{
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void insertionAtBeginning(struct node **head)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted at the beginning : ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=*head;
    *head=newnode;
}
void insertionAtEnd(struct node **tail)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted at the End : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
   (*tail)->next = newnode;
   newnode->prev=*tail;
   *tail = newnode;
}
int main()
{
   create(&head);
   display(head);
   printf("\n\n");
   printf("===insertion at the beginning is about to happen===");
   printf("\n\n");
   insertionAtBeginning(&head);
   display(head);
   printf("\n\n");
   printf("===insertion at the end is about to happen===");
   printf("\n\n");
   insertionAtEnd(&tail);
   display(head);   
   
}