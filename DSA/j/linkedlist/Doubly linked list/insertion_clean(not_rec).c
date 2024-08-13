#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void create(struct node **head) {
    struct node *newnode;
    int choice = 1;
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (*head == NULL) {
            *head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Do you want to continue? (0,1): ");
        scanf("%d", &choice);
    }
}

void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertionAtBeginning(struct node **head) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted at the beginning: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newnode;
    }
    *head = newnode;
    if (tail == NULL) {
        tail = newnode;
    }
}

void insertionAtEnd(struct node **tail) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (*tail != NULL) {
        (*tail)->next = newnode;
        newnode->prev = *tail;
        *tail = newnode;
    } else {
        head = *tail = newnode;
    }
}
//finding the length of the LL
int length(struct node *head) {
    int len = 0;
    struct node *temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertionAtPos(struct node **head, int len) {
    int pos;
    printf("Enter the position you want to insert: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > len + 1) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 1) {
        insertionAtBeginning(head);
    } else {
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted: ");
        scanf("%d", &newnode->data);
        struct node *temp = *head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp != NULL) {
            newnode->prev = temp;
            newnode->next = temp->next;
            if (temp->next != NULL) {
                temp->next->prev = newnode;
            }
            temp->next = newnode;
            if (newnode->next == NULL) {
                tail = newnode;
            }
        }
    }
}

void insertionAfterPos(struct node **head, int len) {
    int pos;
    printf("Enter the position after which you want to insert: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > len) {
        printf("Invalid position\n");
        return;
    }
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data to be inserted: ");
    scanf("%d", &newnode->data);
    struct node *temp = *head;
    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp != NULL) {
        newnode->prev = temp;
        newnode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
        if (newnode->next == NULL) {
            tail = newnode;
        }
    }
}

int main() {
    create(&head);
    display(head);
    
    printf("=== Insertion at the beginning is about to happen ===\n");
    insertionAtBeginning(&head);
    display(head);
    
    printf("=== Insertion at the end is about to happen ===\n");
    insertionAtEnd(&tail);
    display(head);
    
    int len = length(head);
    
    printf("=== Insertion at a specific position is about to happen ===\n");
    insertionAtPos(&head, len);
    display(head);
    
    len = length(head); // Update length after insertion
    printf("=== Insertion after a specific position is about to happen ===\n");
    insertionAfterPos(&head, len);
    display(head);
    
    return 0;
}
