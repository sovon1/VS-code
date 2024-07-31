//prefix sum (optimized version) for 2D
//this one seems very nice 
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N][N];  //use 1 based array for prefix sum
long long pf[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
      for(int j=1;j<=n;j++)
      {
        cin>>a[i][j];
      pf[i][j]=a[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];

        
      }
        }

  //calculating prefix sum

  int q;
  cin>>q;

  while(q--)
  {
    int a,b,c,d; //form a,b  to c,d
    cin>>a>>b>>c>>d;
     cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1] + pf[a-1][b-1]<<endl;
  }

}


//O (q*n)