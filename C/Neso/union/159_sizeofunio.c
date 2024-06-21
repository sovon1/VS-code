//can you guess the size?
#include<stdio.h>
union abc{
    char a;
    int b;
    char c;
    double d;
    
} ;
int main()
{
    union abc var;
    printf("%d",sizeof(var));
    //it's all about the bigger size
}
