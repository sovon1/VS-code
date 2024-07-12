#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
  ofstream file;
  file.open("sovon.txt",ios::out|ios::app);
  cout<<"Enter your name : ";
  getline(cin,name);
  file<<"welcome "<<name<<endl;
  file.close();
  cout<<"Data is stored"<<endl;
//you can create a student details
    return 0;
}