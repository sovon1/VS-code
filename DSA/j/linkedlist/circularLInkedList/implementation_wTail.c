#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*tail;


void create (struct node **head)
{
  
    *head = NULL;
    
    struct node *newNode;
    int choice = 1;
    while(choice){
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    if(*head==NULL)
    {
        *head=tail=newNode;
        //tail->next=head;
    }
   else 
   {
    tail->next = newNode;
    tail = tail->next;
    //tail->next=head
    
   }
   tail->next = *head;
   printf("Do you want to continue ? (0,1):");
   scanf("%d",&choice);

    }
}
void display(struct node *head)
{
   
    if(head==NULL)
    {
        printf("The list is empty:");
    }
     else{
         temp=head;
         while(temp->next!=head){
         printf("%d ",temp->data);
         temp=temp->next;
         }
         printf("%d ",temp->data); //just look at the while loop condition ,since there the last data won't be printed due to temp->next containing head so we did this 


     }
}
int main()
{
 
    create(&head);
    printf("\n");
    display(head);

}