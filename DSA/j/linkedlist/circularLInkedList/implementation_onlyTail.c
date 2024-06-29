#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*tail;


void create (struct node **tail)
{
  
    *tail= NULL;
    
    struct node *newNode;
    int choice = 1;
    while(choice){
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    if(*tail==NULL)
    {
        *tail=newNode;
        (*tail)->next = *tail; // Circular link for the first node
        //tail->next=head;
    }
   else 
   {
    newNode->next=(*tail)->next;//for tail->next will always contain the adress of the first node
    (*tail)->next = newNode;//you can't do this later for it will remain empty since one pointer is maintaining

    *tail = (*tail)->next;
    //tail->next=headl
    
   }
   
   printf("Do you want to continue ? (0,1):");
   scanf("%d",&choice);

    }
}
void display(struct node *tail)
{
   
    if(tail==NULL)
    {
        printf("The list is empty:");
    }
     else{
        struct node *temp;
         temp=tail->next;
         while(temp->next!=tail->next){
         printf("%d ",temp->data);
         temp=temp->next;
         }
         printf("%d ",temp->data); //just look at the while loop condition ,since there the last data won't be printed due to temp->next containing head so we did this 

       //you can implement it using do while without the second input option

     }
}
int main()
{
 
    create(&tail);
    printf("\n");
    display(tail);

}