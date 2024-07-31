
//longest sub array

#include<iostream>
#include<climits>//no need
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int i;
    int count = 1,mx = 0;
    for(i=0; i<n; i++)
    {

        cin>>array[i];


    }



    for(i=1; i<n-1; i++)
    {
        //this is completely my logic huh
        //kya bakchodi logic hai ye but still works
        if(array[i]-array[i-1]==array[i+1]-array[i])
            count++;
        if(mx<count)
            int mx = count;

    }







    cout<<mx<<endl;











    return 0;
}
