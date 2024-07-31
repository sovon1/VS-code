//linear search
#include<iostream>
using namespace std;

int linearsearch(int array[],int n,int key)
{


    for ( int i = 0; i < n; i++)
    {
    if(array[i]==key)
        return i;
    }
    return -1;
    
}

int main()
{
    int n;

    cin>>n;
    int array[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int key;
    cin>>key;

      if ((linearsearch(array,n,key))!=-1)
      {
    cout<<"value found in "<<linearsearch(array,n,key)<<"th index(forget the th rd st mistake)"<<endl;
    cout<<"and the value is " <<array[linearsearch(array,n,key)]<<endl;

      }

     
      else
      cout<<"value isn't found"<<endl;


    // you could assign the linearsearch funtion into another variable to make the code easier

   //Time complexity O(n);
}