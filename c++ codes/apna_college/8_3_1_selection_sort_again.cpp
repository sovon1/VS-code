#include<iostream>
using namespace std;
int main()
{

    int i,j,temp;
    int n;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];

    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {

            //if(array[i]<array[j])//descending
            if(array[i]>array[j])
            {
                temp = array[j];
                array[j]=array[i];
                array[i]=temp;

            }
        }




    }
    for(i=0;i<n;i++)
    {

        cout<<array[i]<<endl;
    }

}
