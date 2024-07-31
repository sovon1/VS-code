#include<stdio.h>
#include<malloc.h>
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
int main()
{
    struct node *head = NULL;
    createLinkedList(&head);
    display(head); 
//let's perform insertion 
printf("\n");
   insertionAtTheBeg(&head);
   display(head);
}