#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public : 
    string name;
 //when two name became same
   student (string name)
   {
       this -> name = name;
   }
  void display()
  {
    cout<<name<<endl;
  }
    
}; 


int main()
{
 student s1("sovon");
 s1.display();




    getch();
}