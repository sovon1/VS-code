#include<iostream>
using namespace std;
int main()
{

    int i, n;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++)
    {

        cin>>array[i];
    }
    int counter = 1;
    while(counter<n)
    {


    for(i=0;i<n-counter;i++)
    {

        if(array[i]>array[i+1])
        {
            int temp = array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }



    }
    counter++;

    }
    for ( i=0; i < n; i++)
    {
        cout<<array[i]<<' ';
    }




    return 0;
}
