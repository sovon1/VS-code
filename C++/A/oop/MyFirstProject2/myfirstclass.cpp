//all the description
#include "myfirstclass.h"

#include<iostream>
using namespace std;
MyFirstClass :: MyFirstClass()
{

    cout<<"constructor is called"<<endl;
}
MyFirstClass::~MyFirstClass()
{

    cout<<"destructor is callled"<<endl;
}
void MyFirstClass:: display()
{
    cout<<"display is called"<<endl;

}
