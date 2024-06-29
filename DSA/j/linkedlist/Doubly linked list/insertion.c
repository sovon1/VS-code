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
int length(struct node *head)
{
    int len = 0;
    temp=head;
    while(temp!=0)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
void insertionAtPos(struct node **head,int len)
{
    int pos;
    printf("Enter the postion you want to insert: ");
     scanf("%d",&pos);
    if(pos<1 && pos>len)
    {
        printf("invalid positon");
        return;
    }
    else if(pos==1)
    {
        insertionAtBeginning(&head);
    }
    else
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d",&newnode->data);
        int i=1;
         temp = *head;
         /*you were confused earlier about positon for 2
         actually for 2 while loop won't execute only first node
         will be responsible for to perform our desired operation..
         which will happen without while loop*/
        while(i<pos-1)
        {

            temp=temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
        // same as temp->next->prev = newnode but you'll have to put one line before


    }
}  
void insertionAfterPos(struct node **head,int len)
{
    int pos;
    printf("Enter the postion you want to insert: ");
     scanf("%d",&pos);
    if(pos<1 && pos>len)
    {
        printf("invalid positon");
        return;
    }
    else if(pos==1)
    {
        insertionAtBeginning(&head);
    }
    else
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d",&newnode->data);
        int i=1;
         temp = *head;
         /*you were confused earlier about positon for 2
         actually for 2 while loop won't execute only first node
         will be responsible for to perform our desired operation..
         which will happen without while loop*/
        while(i<=pos-1) //i am changing only here
        // or i<pos....yk why...don't ya?
        {

            temp=temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
        // same as temp->next->prev = newnode but you'll have to put one line before


    }
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
   //let's count the length of the linekd list
   int len = length(head);
   printf("\n\n");
   printf("===insertion at a specific position is about to happen===");
   printf("\n\n");
   insertionAtPos(&head,len);
   display(head);
   printf("\n\n");
   printf("===insertion after a specific position is about to happen===");
   printf("\n\n");
   insertionAfterPos(&head,len);
    display(head);

}
