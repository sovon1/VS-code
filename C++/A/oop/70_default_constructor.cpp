#include<iostream>
using namespace std;
class student 
{
   public:
       int id;
       double gpa;
       void display()
       {
        cout<<id<<" "<<gpa<<endl;
       }
       //constructor should have no return type
       //constructor should be same name as class name
       //this process is known as constructor initializer
       student (int x,double y)
       {
        id = x;
        gpa = y;
       
       }
       student()
       {
        cout<<"Default constructor called"<<endl;
       }
     /*void setValue(int x,double y)
       {
        id = x;
        gpa = y;
       }*/  
};
int main()
{
   student ob; //default constructor would be called as no parameter been passed
    student sovon(19,3.83);//this one is paramitarized constructor
    //sovon.setValue(19,3.83);
    sovon.display();
  
    //samiha.setValue(02,3.82);
    student samiha(02,3.82);
    samiha.display();
   


}