#include<stdio.h>
#include<stdlib.h>

// We declare a structure for a linked list node globally so that it can be used in every function
struct node {
   int data;
   struct node *next;
};

// Function to insert a new node at the beginning of the linked list
void insertionAtTheBeginning(struct node **head) {
   // We use a double pointer here to modify the head pointer of the linked list directly
   struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node

   // Get the data to be inserted into the new node
   printf("Enter the data you want to insert at the beginning: ");
   scanf("%d", &newNode->data);
  
   // Point the new node's next to the current head
   newNode->next = *head;

   // Update the head to point to the new node
   *head = newNode;
}

// Function to insert a new node at the end of the linked list
void insertionAtTheLast(struct node **head) {
   struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node
   struct node *temp = *head;

   // Get the data to be inserted into the new node
   printf("Enter the data you want to insert at the end: ");
   scanf("%d", &newNode->data);
   
   newNode->next = NULL; // Set the new node's next pointer to NULL

   // If the linked list is empty, make the new node the head
   if (*head == NULL) {
      *head = newNode;
   } else {
      // Otherwise, traverse to the last node
      while (temp->next != NULL) {
         temp = temp->next;
      }
      // Add the new node to the end of the list
      temp->next = newNode;
   }
}

int main() {
   int choice = 1;
   struct node *head = NULL, *temp = NULL; // Initialize the head and temp pointers to NULL
   
   // Loop to insert nodes at the end of the linked list
   while(choice) {
      struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node

      // Get the data to be inserted into the new node
      printf("Enter the data you want to insert: ");
      scanf("%d", &newNode->data);

      newNode->next = NULL; // Set the new node's next pointer to NULL

      // If the linked list is empty, make the new node the head
      if(head == NULL) {
         head = temp = newNode;
      } else {
         // Otherwise, add the new node to the end of the list
         temp->next = newNode;
         temp = newNode;
      }

      // Ask the user if they want to continue inserting nodes at the end
      printf("Do you want to continue inserting at the end? (0,1): ");
      scanf("%d", &choice);
   }

   // Now insert a new node at the beginning of the linked list
   printf("Now insert at the beginning.\n");
   insertionAtTheBeginning(&head); // We pass the address of the head pointer so it can be modified

   // Traverse and print the entire linked list
   temp = head;
   printf("The linked list is: ");
   while(temp != NULL) {
      printf("%d ", temp->data); // Print the data of each node
      temp = temp->next; // Move to the next node
   }
   printf("\n");

   // Optionally, insert at the end using the new function
   printf("Now insert at the end again.\n");
   insertionAtTheLast(&head);

   // Traverse and print the entire linked list again
   temp = head;
   printf("The linked list is now: ");
   while(temp != NULL) {
      printf("%d ", temp->data); // Print the data of each node
      temp = temp->next; // Move to the next node
   }
   printf("\n");

   return 0;
}
