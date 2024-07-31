//sumofsubarrays
//subOfArrays

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int i;
    for(i=0;i<n;i++)
    {

        cin>>array[i];


    }
    int sumOfsubArray=0;
     for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++){

        sumOfsubArray +=array[j];
        cout<<sumOfsubArray<<' ';
        }
        cout<<endl;
        //previously you wrote i++ here why tf you have gone to do that ?
        //can't you see there is a for loop where i++ itself exists!

         sumOfsubArray=0;





    }







    return 0;
}
