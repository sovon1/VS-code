#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int maxNum = INT_MIN; //we could initialize to array[i] but this is the effective one
    int minNum = INT_MAX;


      for(int i=0;i<n;i++)
      {


        //these are builit in funcion and quite effective
         maxNum = max(maxNum,array[i]);
         minNum = min(minNum,array[i]);

         //here is the general way
        /*if(maxNum<array[i])
         {
            maxNum = array[i];
         }
          if (array[i]<minNum)
          {
            minNum=array[i];
          }
                 */


      //yeaaa consistency matters bro in every aspects (environments too)

      }

        cout<<maxNum<<endl;
        cout<<minNum<<endl;




  
    


    return 0;
}