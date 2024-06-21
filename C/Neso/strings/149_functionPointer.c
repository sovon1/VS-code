#include<stdio.h>
#define ops 4

float add(float a,float b){return a+b;};
float sub(float a,float b){return a-b;};
float mul(float a,float b){return a*b;};
float div(float a,float b){return a/b;};
int main()
{
    float(*ptr[ops])(float,float)={add,sub,mul,div};
    printf("Enter 0 for add,1 for sub,2 for mul and 3 for div: ");
    int n;
    scanf("%d",&n);
    printf("Enter two numbers : ");
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%f",(*ptr[n])(a,b)); //you will have to pass the argument too
    


    return 0;
}