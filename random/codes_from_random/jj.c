#include<stdio.h>

int a,b;
int value;
int add()
{
    int add = a + b;
    printf("%d",add);
    
}
int sub()
{
    int sub = a - b;
    printf("%d",sub);
    
}
int mul()
{
    int mul = a * b;
    printf("%d",mul);
    
}
float div()
{
   float  div = a / b;
    printf("%f",div);
    
}

int caluculation()
{

   printf("enter 1 ,2 ,3,4 for add ,sub,mul,div:");
   int n;
   scanf("%d",&n);
   if(n==1)
   add(n);
   else if(n==2)
   sub(n);
   else if(n==3)
   mul(n);
   else if(n==4)
   div(n);
   


}
int inputtaking()
{
    printf("Enter two numbers : ");
    scanf("%d%d",a,b);
    calculation(a,b);



}
int main()
{
    inputtaking();



}