#include<stdio.h>

int a,b;
int value;
void add()
{
    int sum = a + b;
    printf("%d\n",sum);
    
}
void sub()
{
    int diff = a - b;
    printf("%d\n",diff);
    
}
void mul()
{
    int product = a * b;
    printf("%d\n",product);
    
}
void div()

{
  
       float result = (float)a / b;
       printf("%f\n",result);
  
}
void calculation()
{
   printf("Enter 1, 2, 3, 4 for add, sub, mul, div: ");
   int n;
   scanf("%d",&n);
   if(n==1)
       add();
   else if(n==2)
       sub();
   else if(n==3)
       mul();
   else if(n==4)
       div();
 
}
void inputtaking()
{
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    calculation();
}
int main()
{
    inputtaking();
    return 0;
}
