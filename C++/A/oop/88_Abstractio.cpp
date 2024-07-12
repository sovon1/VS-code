#include<iostream>
using namespace std;
class mobileUser
{
    public:
    virtual void sendMessage()=0;

};
class Rahim : public mobileUser
{
     public:
     void sendMessage ()
     {
        cout<<"HI this is rahim"<<endl;

     }


};

class Karim : public mobileUser
{
     public:
     void sendMessage ()
     {
        cout<<"HI this is Karim"<<endl;
        
     }


};
int main()
{

  mobileUser *m;
  Rahim r;
  Karim k;
  m = &r;
  m->sendMessage();
  m = &k;
  m->sendMessage();

}