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
    //destructor(you don't have to call destructor ,it will be called automatically after all execuation)

    ~Student()
    {
      cout<<"Hi , i delete everything"<<endl;
     
    delete cgpaPtr;
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
 
   s1.getinfo();



}