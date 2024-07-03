#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if((rear+1)%N==front)
        printf("overflow\n");
    else if(rear == -1 && front == -1)
        {
            front=rear=0;
            queue[rear]=x;
        }
    else {
          rear = (rear+1)%N; //this is equivalent to rear++
          queue[rear]=x;
        }
}
void dequeue()
{
    if(front==-1 && rear == -1)
    printf("Undeflow\n");
    else if(front == rear)
        front=rear=-1;
    else
      {
        printf("Dequeued data is %d\n",queue[front]);
        front = (front+1)%N; //this is equivalent to front++
      }    
}
void display()
{
    int i = front;
    if(front == -1 && rear == -1)
    printf("The queue is empty\n");
    else
    {
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i = (i+1)%N;
        }
        printf("%d",queue[rear]); //use do while to get rid of this problem
    }
}
void peek()
{
     if(front == -1 && rear == -1)
    printf("The queue is empty\n");
     else
    printf("The peek data is : %d",queue[front]);
    
}
int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(-1);
    printf("\n");
    display();
        printf("\n");

    peek();
        printf("\n");

    dequeue();
        printf("\n");

    peek();
        printf("\n");

    display();

}