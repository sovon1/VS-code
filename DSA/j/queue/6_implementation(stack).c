//this one is awesome to grasp stack
//you will have to visualize it actually
//behind the process it is stack but abstraction and properties it holds is for queue
//this one is real banger for sure
#include<stdio.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-2;
int count=0;
int pop2()
{
    return s2[top2--];
}
void push2(int data)
{
    if(top2==N-1)
    printf("The queue is already full");
    else
    {
        top2++;
        s2[top2]=data;
    }
}
int pop1()
{
    return s1[top1--];
}
void push1(int data)
{
    if(top1==N-1)
    printf("The queue is already full");
    else
    {
        top1++;
        s1[top1]=data;  // use s1[++top1]=data ; next time
    }
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue ()
{
    if(top1==-1)
    printf("The dequeue is already empty");
    else
    {
    for(int i=0;i<count;i++)
    {
        int a = pop1();
        push2(a);

    }
    int b = pop2(); //by doing so you also decremented the top2
      printf("The dequeue data is : %d",b);
      count--;
      for(int i=0;i<count;i++)
      {
        int a=pop2(); //decremented top2 will result in second element after poping
        push1(a);
      }
    }
    
}
void display()
{
    if(top1==-1)
    printf("There is nothing in the queue ");
    else
    {
        for(int i=0;i<=top1;i++)
        {
            printf("%d ",s1[i]);
        }
    }
}
void peek()
{
    if(top1==-1)
    printf("There is literally nothing");
    else
    printf("The peek element is : %d",s1[0]);
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