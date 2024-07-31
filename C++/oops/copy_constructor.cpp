#include<bits/stdc++.h>
using namespace std;
class Teacher 
{   private:
      double salary;
    public:
    

   Teacher(string name, string dept,string subject,double salary) //parametarized constructor
   {
       this->name = name;
       this->dept = dept;
      this->subject = subject;
       this->salary = salary;  }
     //properties//attributes
     string name;
     string dept;
     string subject;
    

     //methods //member function
     void changeDept(string newDept)
     {
        dept = newDept;
     }
     //setter
     void setSalary(double s)
     {
        salary = s;
     }
    //getter
     double getSalary ()
     {
        return salary;
     }
     void getinfo()
     {
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
     }

     //copy constructor
     Teacher(Teacher &OrgObj) //pass by reference
     {
        cout<<"i am copy constructor"<<endl;
 this->name = OrgObj.dept;
 this->dept = OrgObj.dept;
 this ->subject = OrgObj.subject;
 this->salary = OrgObj.salary;
     }
};

int main()
{

Teacher t1("sovon","computer science","C++",90000);
Teacher t2(t1);//custom_copy constuctor invoke
t2.getinfo();
  
   



}