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
};
int main()
{
    student sovon,samiha;
    sovon.id=19;
    sovon.gpa=3.83;
    //cout<<sovon.id<<" "<<sovon.gpa<<endl;
    sovon.display();
    samiha.id = 02;
    samiha.gpa = 3.82;
   // cout<<samiha.id<<" "<<samiha.gpa<<endl;
   samiha.display();
   


}