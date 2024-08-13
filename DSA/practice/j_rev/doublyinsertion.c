#include<stdio.h>
#include<malloc.h>
#define n printf("\n");
struct node {
  int data;
  //two pointer
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
void insertionAtTheBeg(struct node **head)
{
  struct node *newNode;
  newNode = (struct node*)malloc(sizeof(struct node));
  printf("Enter data to be inserted : ");
  scanf("%d",&newNode->data);
newNode->next=*head;
newNode->prev=NULL;
*head=newNode;
}
void insertionAfterPos(struct node **head)
{
  struct node *temp,*newNode;
  temp=*head;
  printf("Enter pos: ");
  int pos;int i=1;
  scanf("%d",&pos);
 

  //performation will be after pos(you can perform at pos too)
  while (i<pos)
  {
     temp=temp->next;
    i++;
  }
  newNode = (struct node*)malloc(sizeof(struct node));
  printf("Enter data to insert after %d pos: ",pos);
  scanf("%d",&newNode->data);
  newNode->prev=temp;
  newNode->next=temp->next;
  temp->next->prev=newNode;
  temp->next=newNode;
  

  
}
int main()
{
  
  create(&head);
 display(head);
//performing insertion
n
insertionAtTheBeg(&head);
display(head);
n
insertionAfterPos(&head);
display(head);
}