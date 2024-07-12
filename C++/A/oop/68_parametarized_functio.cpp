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
       void setValue(int x,double y)
       {
        id = x;
        gpa = y;
       }
};
int main()
{
    student sovon,samiha;
    //sovon.id=19;
    //sovon.gpa = 3.83;
    sovon.setValue(19,3.83);
    sovon.display();
    //samiha.id = 02;
    //samiha.gpa = 3.82;
    samiha.setValue(02,3.82);
   samiha.display();
   


}