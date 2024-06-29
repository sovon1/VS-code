#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if (top==N-1)
    {
        printf("overflow");
    }
    else
    {
     
     top++;
     stack[top]=x;

       
    }
    
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        item=stack[top];
        top--;
      printf("popped item is %d\n",item);




    }
}
// Function to display the top element of the stack
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The top data is %d\n", stack[top]);
    }
}
void display()
{
    for (int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    push();
    push();
    push();
    

    pop();

    peek();
   display();

}