#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
//this is real banger
struct node* create()
{
    struct node *newNode;int x;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    newNode->data = x;
    printf("Enter the left child of %d",x);
    newNode->left = create();
    printf("Enter the right child of %d",x);
    newNode->right=create();
    return newNode;

}


int main()
{
    struct node *root;
    root=NULL;
    root = create();
}
