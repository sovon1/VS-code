#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the circular linked list
struct node {
    int data;           // Data stored in the node
    struct node *next;  // Pointer to the next node in the list
} *tail;

// Function to create a circular linked list
void create(struct node **tail) {
    *tail = NULL;       // Initialize tail to NULL
    
    struct node *newNode;
    int choice = 1;

    while (choice) {
        // Allocate memory for a new node
        newNode = (struct node *)malloc(sizeof(struct node));
        
        // Input data for the new node
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (*tail == NULL) {
            // If the list is empty, initialize the first node
            *tail = newNode;
            (*tail)->next = *tail;  // Point the next of the first node to itself to maintain circularity
        } else {
            // If the list is not empty, add the new node at the end
            newNode->next = (*tail)->next; // Point new node to the head
            (*tail)->next = newNode;       // Point current tail to new node
            *tail = newNode;               // Update tail to the new node
        }
        
        // Ask user if they want to continue adding nodes
        printf("Do you want to continue? (0,1): ");
        scanf("%d", &choice);
    }
}

// Function to display the circular linked list
void display(struct node *tail) {
    if (tail == NULL) {
        // If the list is empty, print a message
        printf("The list is empty.\n");
    } else {
        // If the list is not empty, traverse and print the list
        struct node *temp = tail->next;  // Start from the head
        do {
            printf("%d ", temp->data);  // Print the data of the current node
            temp = temp->next;          // Move to the next node
        } while (temp != tail->next);   // Stop when we reach the head again
        printf("\n");
    }
}

// Main function
int main() {
    // Create the circular linked list
    create(&tail);
    
    // Print a newline for better output formatting
    printf("\n");
    
    // Display the circular linked list
    display(tail);
   
    return 0;
}
