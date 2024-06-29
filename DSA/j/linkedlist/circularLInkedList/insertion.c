//see insertion 2 for the upgrader version(after this one)
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;           
    struct node *next;  
} *tail;

void insertionAtBeg(struct node **tail)
{
    if(*tail==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        struct node *newNode;
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert at the beginning : ");
        scanf("%d",&newNode->data);
        newNode->next=(*tail)->next;
        (*tail)->next=newNode;

    }
}


void insertionAtEnd(struct node **tail)
{
    if(*tail==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        struct node *newNode;
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert at the End : ");
        scanf("%d",&newNode->data);
        newNode->next=(*tail)->next;
        (*tail)->next=newNode;
        *tail=(*tail)->next;

    }
}
int getlen(struct node *tail)
{
    int len=0;
    struct node *temp;
    temp=tail->next;
    while (temp->next!=tail->next)
    {
        len++;
        temp=temp->next;
    }
    len++;
    return len;
    
}
void insertionAfterPos(struct node **tail,int len)
{
    struct node *temp;
    temp=(*tail)->next;
    printf("At which positon you want to insert: ?");
    int pos;
    scanf("%d",&pos);
    if(*tail==NULL)
    {
        printf("The list is empty");
    }
    else if(pos==1)
    {
        insertionAtBeg(tail);
    }
    else if(pos==len)
    {
        insertionAtEnd(tail);
    }
    else
    {
        struct node *newNode;int i=1;
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert at the End : ");
        scanf("%d",&newNode->data);
        while (i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        
    }
}


// Function to create a circular linked list(with only tail)
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

    printf("\n");
    insertionAtBeg(&tail);
    display(tail);
    printf("\n");
    insertionAtEnd(&tail);
    display(tail);
    int len = getlen(tail);

    printf("\n");
    insertionAfterPos(&tail,len);
    display(tail);
    return 0;
}
