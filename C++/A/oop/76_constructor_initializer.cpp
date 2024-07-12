#include<iostream>
using namespace std;
class student
{

public:
   const int admissionfee;
   const int examfee;
    student(int x, int y)
    : admissionfee(x) ,examfee(y)

    {


        cout<<admissionfee<<endl;
        cout<<examfee<<endl;
    }

};
int main()
{

    student s1(15000,500);


}
