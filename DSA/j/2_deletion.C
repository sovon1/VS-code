#include <stdio.h>
#include <stdlib.h>


// We declare a structure for a linked list node globally so that it can be used in every function
struct node {
   int data;
   struct node *next;
};
// Function to create the linked list
void createList(struct node **head) {
   int choice = 1;
   struct node *temp = NULL; // Initialize the temp pointer to NULL

   // Loop to insert nodes at the end of the linked list
   while(choice) {
      struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node

      // Get the data to be inserted into the new node
      printf("Enter the data you want to insert: ");
      scanf("%d", &newNode->data);

      newNode->next = NULL; // Set the new node's next pointer to NULL

      // If the linked list is empty, make the new node the head
      if(*head == NULL) {
         *head = temp = newNode;
      } else {
         // Otherwise, add the new node to the end of the list
         temp->next = newNode;
         temp = newNode;
      }

      // Ask the user if they want to continue inserting nodes at the end
      printf("Do you want to continue inserting at the end? (0,1): ");
      scanf("%d", &choice);
   }
}

// Function to display the linked list
void displayList(struct node *head) {
   struct node *temp = head;

   printf("The linked list is: ");
   while(temp != NULL) {
      printf("%d ", temp->data); // Print the data of each node
      temp = temp->next; // Move to the next node
   };and then i see you again with ever
   printf("\n");
}

void deleteFromTheBeginng(struct node **head)
{
    if (*head == NULL) {
      printf("The list is already empty.\n");
      return;
   }
    struct node *temp;
    temp = *head;
    *head = (*head)->next;

    free(temp);
    //i just freed the memory incase of memory leakage 
}
int main() {
   struct node *head = NULL; // Initialize the head pointer to NULL


   // Create the linked list
   createList(&head);

   // Display the linked list
   displayList(head);
  //deleting from the beginning
  deleteFromTheBeginng(&head);
  printf("after deletion the linked list is : \n");
  displayList(head);

   return 0;
}