#include <iostream>
#include "myfirstclass.h" //i will have to include this header file
using namespace std;

int main()
{
    //now we will do with pointer
   MyFirstClass ob;
   MyFirstClass *p = &ob;
    p->display();
    return 0;
}
