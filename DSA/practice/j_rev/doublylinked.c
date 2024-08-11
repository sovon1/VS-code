#include<stdio.h>
#include<malloc.h>
#define n printf("\n");
struct node {
  int data;
  struct node *next;
  struct node *prev;

};
struct node *head,*temp;
void create(struct node **head)
{
    *head=NULL;
    struct node *temp;
    int choice = 1;
    while ( choice)
    {
      struct node *newNode = (struct node *)malloc(sizeof(struct node));
      printf("enter data : ");
      scanf("%d",&newNode->data);
      newNode->next = newNode->prev = NULL;
      if(*head==NULL)
      {
        *head=temp=newNode;
      }
      else
      //then he asks 
      {
        temp->next=newNode;
        newNode->prev=temp;
        temp=temp->next;
      }
      printf("Do you want to continue or not (0/1)?: ");
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