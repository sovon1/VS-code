#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the circular linked list
struct node {
    int data;           // Data stored in the node
    struct node *next;  // Pointer to the next node in the list
} *tail;

// Function to insert a node at the beginning of the list
void insertionAtBeg(struct node **tail) {
    if (*tail == NULL) {
        printf("The list is empty\n");
    } else {
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert at the beginning: ");
        scanf("%d", &newNode->data);
        newNode->next = (*tail)->next; // Point new node to the head
        (*tail)->next = newNode;       // Point tail to the new node
    }
}

// Function to insert a node at the end of the list
void insertionAtEnd(struct node **tail) {
    if (*tail == NULL) {
        printf("The list is empty\n");
    } else {
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert at the end: ");
        scanf("%d", &newNode->data);
        newNode->next = (*tail)->next; // Point new node to the head
        (*tail)->next = newNode;       // Point current tail to the new node
        *tail = newNode;               // Update tail to the new node
    }
}

// Function to get the length of the circular linked list
int getlen(struct node *tail) {
    if (tail == NULL) return 0;
    int len = 0;
    struct node *temp = tail->next;
    do {
        len++;
        temp = temp->next;
    } while (temp != tail->next);
    return len;
}

// Function to insert a node after a specific position in the list
void insertionAfterPos(struct node **tail, int len) {
    if (*tail == NULL) {
        printf("The list is empty\n");
        return;
    }

    struct node *temp = (*tail)->next;
    printf("At which position do you want to insert? ");
    int pos;
    scanf("%d", &pos);

    if (pos < 1 || pos > len) {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1) {
        insertionAtBeg(tail);
    } else if (pos == len) {
        insertionAtEnd(tail);
    } else {
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert at position %d: ", pos);
        scanf("%d", &newNode->data);

        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to create a circular linked list (with only tail)
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

    // Display the circular linked list
    printf("\n");
    display(tail);

    // Insert at the beginning and display
    printf("\n");
    insertionAtBeg(&tail);
    display(tail);

    // Insert at the end and display
    printf("\n");
    insertionAtEnd(&tail);
    display(tail);

    // Get the length of the list
    int len = getlen(tail);

    // Insert after a specific position and display
    printf("\n");
    insertionAfterPos(&tail, len);
    display(tail);

    return 0;
}
