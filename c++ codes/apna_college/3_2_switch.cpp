#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"plese input a character : ";

      cin>>button;


  switch (button)
  {
  case 'a' :
     cout<<"Hola"<<endl;
    break;

    case 'b' :
     cout<<"Hola"<<endl;
    break;

    case 'c' :
     cout<<"Assalamualikum"<<endl;
    break;

    case 'd' :
     cout<<"ciao"<<endl;
    break;

    case 'e' :
     cout<<"howdy"<<endl;
    break;

    case 'f' :
     cout<<"oh hoh"<<endl;
    break;

  default: //you can place default anywhere you want
    cout<<"i am still learning";
    break;
  }



}
