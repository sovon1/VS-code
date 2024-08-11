#include<stdio.h>
#include<malloc.h>
struct node 
{
    int data;
   struct node *prev;
   struct node *next;
    
};
struct node *head , *temp;
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
int main()
{
   create(&head);
   display(head);
   
}