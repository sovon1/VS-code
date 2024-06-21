//can you guess the size?
#include<stdio.h>
struct abc{
    char a;
    int b;
    char c;
    
} ;
int main()
{
    struct abc var;
    printf("%ld",sizeof(var));
}
//it's all about the number of words are accessed 
//also about cpu cycle