#include<stdio.h>
#define NULL 0
void main()
{
struct node
{
    int data;
    struct node* next;
};
struct node *head, *NewNode ,*temp;
head = NULL;int choice;
while(choice)
{
NewNode=(struct node *)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&NewNode->data);
NewNode->next=NULL;
if(head==NULL)
{
head = temp = NewNode;
}else
{
    temp->next=NewNode;
    temp = NewNode;
}
printf("Do you want continue ?(0,1 ) : ");
scanf("%d ",&choice);
}
temp = head;
while(temp!=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}
getch();
}