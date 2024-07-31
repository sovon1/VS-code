#include<stdio.h>
#include<malloc.h>
#define n printf("\n"); 
struct node {
  int data;
  struct node* next;
};
void createLinkedList(struct node **head)
{
   struct node *temp = NULL;
   int choice = 1;
   while(choice)
   {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for the newNode: ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    if(*head==NULL)
    {
        *head=temp=newNode;
    }
    else
    {
        temp->next = newNode;
        temp=temp->next; 
    }
    printf("Do you want to continue? : ");
    scanf("%d",&choice);
   }
}
void display(struct node *head)
{
    printf("The linked list is : ");
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
void insertionAtTheBeg(struct node **head)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted : ");
    scanf("%d",&newNode->data);
    newNode->next = *head;
    *head=newNode;

}

int len(struct node *head)
{
    int count=0;
    struct node * temp = head;
    while (temp!=NULL)  
    {
        count++;
        temp=temp->next;
    }
    return count;
    
}
void insertionAfterAspecific(struct node **head,int location)
{
    struct node *temp = *head;
    for(int i=0;i<location-1;i++)
    {
      temp= temp->next;
    }
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to inset : ");
    scanf("%d",&newNode->data);
    newNode->next = temp->next;
    temp->next=newNode;
}
int main()
{
    struct node *head = NULL;
    createLinkedList(&head);
    display(head); 
//let's perform insertion 
n
   insertionAtTheBeg(&head);
   display(head);
   //finding out the length
   int length = len(head);
   printf("The length is %d",length);
//insertion at a specific position
n
int location;
printf("Enter the location you want to insert : ");
scanf("%d",&location);
insertionAfterAspecific(&head,location);
display(head);



}