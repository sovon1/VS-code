
//writing a program where only odd days are allowed and depends on the
#include<iostream>
using namespace std;
int main()
{
    //
int count=0;

   int date,pocketmoney;
   cout<<"Enter pocket money for the month please : ";
   cin>>pocketmoney;

   for(date=1;date<=30;date++)
   {
    if(date%2==0)
{
    continue;//this is the heart of code
   }
    if(pocketmoney<300)
    {
    break;
    }
       count++;
    cout<<"Day : "<<date<<"-"<<"you can go out today"<<endl;
    cout<<"toatal execution " << count<<endl;

    pocketmoney=pocketmoney-300;
   }



    return 0;
}
