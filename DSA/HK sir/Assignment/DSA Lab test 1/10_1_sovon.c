#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function prototypes
struct node* create();
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
struct node* insertElement(struct node *, int);
struct node* findSmallestElement(struct node *);
struct node* findLargestElement(struct node *);
struct node* deleteElement(struct node *, int);
int totalNodes(struct node *);
int totalExternalNodes(struct node *);
int totalInternalNodes(struct node *);
int Height(struct node *);
struct node* mirrorImage(struct node *);
struct node* deleteTree(struct node *);

int main() {
    int option, val;
    struct node *root = NULL, *ptr;

    do {
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Insert Element");
        printf("\n 2. Preorder Traversal");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Postorder Traversal");
        printf("\n 5. Find the smallest element");
        printf("\n 6. Find the largest element");
        printf("\n 7. Delete an element");
        printf("\n 8. Count the total number of nodes");
        printf("\n 9. Count the total number of external nodes");
        printf("\n 10. Count the total number of internal nodes");
        printf("\n 11. Determine the height of the tree");
        printf("\n 12. Find the mirror image of the tree");
        printf("\n 13. Delete the tree");
        printf("\n 14. Exit");
        printf("\n\n Enter your option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\n Enter the value of the new node: ");
                scanf("%d", &val);
                root = insertElement(root, val);
                break;
            case 2:
                printf("\n The elements of the tree are: \n");
                preorder(root);
                break;
            case 3:
                printf("\n The elements of the tree are: \n");
                inorder(root);
                break;
            case 4:
                printf("\n The elements of the tree are: \n");
                postorder(root);
                break;
            case 5:
                ptr = findSmallestElement(root);
                if (ptr != NULL)
                    printf("\n Smallest element is: %d", ptr->data);
                break;
            case 6:
                ptr = findLargestElement(root);
                if (ptr != NULL)
                    printf("\n Largest element is: %d", ptr->data);
                break;
            case 7:
                printf("\n Enter the element to be deleted: ");
                scanf("%d", &val);
                root = deleteElement(root, val);
                break;
            case 8:
                printf("\n Total no. of nodes = %d", totalNodes(root));
                break;
            case 9:
                printf("\n Total no. of external nodes = %d", totalExternalNodes(root));
                break;
            case 10:
                printf("\n Total no. of internal nodes = %d", totalInternalNodes(root));
                break;
            case 11:
                printf("\n The height of the tree = %d", Height(root));
                break;
            case 12:
                root = mirrorImage(root);
                break;
            case 13:
                root = deleteTree(root);
                printf("\n Tree deleted");
                break;
        }
    } while(option != 14);

    return 0;
}

// Functions for binary tree operations
struct node* create() {
    struct node *newNode;
    int x;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &x);

    if (x == -1) {
        return NULL;
    }

    newNode->data = x;

    printf("Enter the left child of %d: ", x);
    newNode->left = create();

    printf("Enter the right child of %d: ", x);
    newNode->right = create();

    return newNode;
}

void preorder(struct node *root) {
    if(root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root) {
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root) {
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

struct node* insertElement(struct node *root, int val) {
    if (root == NULL) {
        root = (struct node*)malloc(sizeof(struct node));
        root->data = val;
        root->left = root->right = NULL;
    } else if (val < root->data) {
        root->left = insertElement(root->left, val);
    } else {
        root->right = insertElement(root->right, val);
    }
    return root;
}

struct node* findSmallestElement(struct node *root) {
    if (root == NULL || root->left == NULL)
        return root;
    else
        return findSmallestElement(root->left);
}

struct node* findLargestElement(struct node *root) {
    if (root == NULL || root->right == NULL)
        return root;
    else
        return findLargestElement(root->right);
}

struct node* deleteElement(struct node *root, int val) {
    if (root == NULL)
        return NULL;
    
    if (val < root->data) {
        root->left = deleteElement(root->left, val);
    } else if (val > root->data) {
        root->right = deleteElement(root->right, val);
    } else {
        if (root->left == NULL) { //this one have one child yk the rules nh?  (that's what she said ....hahhahahha)
          //replace with that child
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) { //also one
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        //here comes the point if they have two child 
       
      
        struct node *temp = findSmallestElement(root->right); //performing in order successor
        root->data = temp->data;
        root->right = deleteElement(root->right, temp->data);
    }
    return root;
}

int totalNodes(struct node *root) {
    if (root == NULL)
        return 0;
    return 1 + totalNodes(root->left) + totalNodes(root->right);
}

int totalExternalNodes(struct node *root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return totalExternalNodes(root->left) + totalExternalNodes(root->right);
}

int totalInternalNodes(struct node *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    return 1 + totalInternalNodes(root->left) + totalInternalNodes(root->right);
}

int Height(struct node *root) {
    if (root == NULL)
        return 0;
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

struct node* mirrorImage(struct node *root) {
    if (root == NULL)
        return NULL;
    struct node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirrorImage(root->left);
    mirrorImage(root->right);
    return root;
}

struct node* deleteTree(struct node *root) {
    if (root != NULL) {
        deleteTree(root->left);
        deleteTree(root->right);
        free(root);
    }
    return NULL;
}
