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


    for(i=0; i<n; i++)
    {

        cin>>array[i];


    }
    int pd = array[1]-array[0];
    int current = 2;
    int ans = 2;
    int j = 2;//cz first two of them er kahani toh finish
    while(j<n)
    {
        if(pd==array[j]-array[j-1])
        {
           current++;
        }
        else
        {
            pd=array[j]-array[j-1];
            current = 2;
        }
        ans = max(ans,current);




        j++;
    }

       cout<<ans<<endl;

    return 0;
}
