//own
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*top=NULL;

void push(int x)
{
   struct node *newNode;
   newNode=(struct node*)malloc(sizeof(struct node));
   newNode->data=x;
   newNode->link=top;
   top=newNode;
}
void display()
{
    struct node *temp;
    temp=top;
    if(temp==NULL)
    printf("The list is empty");
    else
    {
        while (temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        
    }
}
void peek()
{
    if(top==NULL)
    printf("The list is empty");
    else
    printf("The peek element is %d",top->data);
}
void pop()
{
    struct node *temp;
    temp = top;
    if(top==NULL)
        printf("Underflow\n");
    else
    {
        temp = top;
        printf("The popped data is %d",top->data);
        top=top->link;
        free(temp);
    }
}
int main()
{
    push(4);
    push(5);
    push(6);
        printf("\n\n");

    display();
        printf("\n\n");

    peek();
        printf("\n\n");

    pop();
        printf("\n\n");

    peek();
        printf("\n\n");

    display();
}