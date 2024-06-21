#include<stdio.h>
#include<stdlib.h>
   
     struct node
   {
    int data;
    struct node *next;
   };
  
int main()
{

   struct node *head,*newNode,*temp;
   head = NULL;int choice = 1;
    while (choice) {
        newNode = (struct node*)malloc(sizeof(struct node));
      
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Do you want to continue? (0,1): ");
        scanf("%d", &choice);
    }

temp=head;//to traverse the value from the very beginning 
    printf("Linked list data: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }




}