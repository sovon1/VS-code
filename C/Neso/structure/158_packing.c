//can you guess the size?
#include<stdio.h>
#pragma pack(1)
struct abc{
    char a;
    int b;
    char c;
    
} ;
int main()
{
    struct abc var;
    printf("%d",sizeof(var));
}
//it's all about the number of words are accessed 
//also about cpu cycle
//either cpu cycle will be wasted or memory 
//you can't controll both