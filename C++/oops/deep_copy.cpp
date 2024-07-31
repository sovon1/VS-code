//shallow copy and deep copy
//see external sites
#include<bits/stdc++.h>
using namespace std;

class Student
{
  public:
    string name;
    double *cgpaPtr;


    Student(string name,double cgpa)
    {
        this ->name=name;
        cgpaPtr = new double; //stored in heap

        *cgpaPtr = cgpa;
    }
    Student(Student &Obj)
    {
        this ->name=Obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *Obj.cgpaPtr;
    }    
    void getinfo()
    {
        cout<<"name: "<<name<<endl; 
        cout<<"cgpa: "<<*cgpaPtr<<endl; 

    }
};
int main()
{
  
 Student s1("sovon",3.83);
 Student s2(s1);//assuming his name is sovon too
   s1.getinfo();
 *(s2.cgpaPtr)=3.91;  
   s1.getinfo();
   s2.name = "ssss";
   s2.getinfo();


}