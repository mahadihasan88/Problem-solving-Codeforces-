#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,x1=1;
    cin>>n>>m;

  long long int count=0;
  while(m--)
  {
      cin>>x;
      if(x>x1){
        count+=x-x1;
      x1=x;
      }
      else if(x1>x)
      {
          count+=n-x1+x;
          x1=x;
      }

  }
    cout<<count<<endl;
    return 0;
}
