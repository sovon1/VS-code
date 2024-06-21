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
//why do i
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
   }
   printf("\n");
}
// Function to insert a new node at the beginning of the linked list
void insertionAtTheBeginning(struct node **head) {
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

// Function to insert a new node after a given location
void insertionAfterLocation(struct node **head, int location) {
   struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node
   struct node *temp = *head;
   int i;

   // Get the data to be inserted into the new node
   printf("Enter the data you want to insert after location %d: ", location);
   scanf("%d", &newNode->data);
   
   // Traverse to the given location
   for (i = 0; i < location; i++) {
      if (temp == NULL) {
         printf("The location is beyond the length of the linked list.\n");
         free(newNode);
         return;
      }
      temp = temp->next;
   }
   
   // Insert the new node after the specified location
   //heart of the code
   newNode->next = temp->next;
   temp->next = newNode;
}

// Function to delete a node from the beginning of the linked list
void deletionAtTheBeginning(struct node **head) {
   if (*head == NULL) {
      printf("The list is already empty.\n");
      return;
   }

   struct node *temp = *head;
   *head = (*head)->next;
   free(temp);
   printf("Node deleted from the beginning.\n");
}

// Function to delete a node from the end of the linked list
void deletionAtTheEnd(struct node **head) {
   if (*head == NULL) {
      printf("The list is already empty.\n");
      return;
   }

   struct node *temp = *head;
   struct node *prev = NULL;

   while (temp->next != NULL) {
      prev = temp;
      temp = temp->next;
   }

   if (prev == NULL) {
      *head = NULL;
   } else {
      prev->next = NULL;
   }

   free(temp);
   printf("Node deleted from the end.\n");
}

// Function to delete a node at a given location in the linked list
void deletionAtLocation(struct node **head, int location) {
   if (*head == NULL) {
      printf("The list is already empty.\n");
      return;
   }

   struct node *temp = *head;
   struct node *prev = NULL;
   int i;

   for (i = 0; i < location; i++) {
      if (temp == NULL) {
         printf("The location is beyond the length of the linked list.\n");
         return;
      }
      prev = temp;
      temp = temp->next;
   }

   if (temp == NULL) {
      printf("The location is beyond the length of the linked list.\n");
      return;
   }

   if (prev == NULL) {
      *head = (*head)->next;
   } else {
      prev->next = temp->next;
   }

   free(temp);
   printf("Node deleted at location %d.\n", location);
}

int main() {
   struct node *head = NULL; // Initialize the head pointer to NULL
   int location;

   // Create the linked list
   createList(&head);

   // Display the linked list
   displayList(head);

   // Insert a new node at the beginning of the linked list
   printf("Now insert at the beginning.\n");
   insertionAtTheBeginning(&head);
   displayList(head);

   // Insert a new node at the end of the linked list
   printf("Now insert at the end again.\n");
   insertionAtTheLast(&head);
   displayList(head);

   // Insert a new node after a given location
   printf("Enter the location after which you want to insert a new node: ");
   scanf("%d", &location);
   insertionAfterLocation(&head, location);
   displayList(head);

   // Delete a node from the beginning
   printf("Now delete from the beginning.\n");
   deletionAtTheBeginning(&head);
   displayList(head);

   // Delete a node from the end
   printf("Now delete from the end.\n");
   deletionAtTheEnd(&head);
   displayList(head);

   // Delete a node at a given location
   printf("Enter the location of the node you want to delete: ");
   scanf("%d", &location);
   deletionAtLocation(&head, location);
   displayList(head);

   return 0;
} 