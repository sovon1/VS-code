#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;             
    struct node *left;    
    struct node *right;  
};
//this one is real banger bro
void preorder(struct node *root)
{
    if(root==NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
struct node* create() {
    struct node *newNode;   
    int x;                
    
    
    newNode = (struct node*)malloc(sizeof(struct node));
    
   
    printf("Enter data: ");
    scanf("%d", &x);
    
    // If the user enters -1, it means there is no node (return NULL)
    if (x == -1) {
        return NULL;
    }
    
    // Assign the entered data to the new node
    newNode->data = x;
    
    printf("Enter the left child of %d: ", x);
    newNode->left = create();  // Recursively create the left subtree
    
    printf("Enter the right child of %d: ", x);
    newNode->right = create();  // Recursively create the right subtree
    
    // Return the newly created node
    return newNode;
}

int main() {
    struct node *root;  
    
    root = NULL; 
    
    root = create();
    
    printf("\nThe preorder tree : \t");
    preorder(root);

   
    printf("\nThe inorder tree : \t");
    inorder(root);


        printf("\nThe postorder tree : \t");
           postorder(root);
    
    return 0;
}
