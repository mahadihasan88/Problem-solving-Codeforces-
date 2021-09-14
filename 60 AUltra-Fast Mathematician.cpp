#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int x=a.size();
  for(int i=0;i<x;i++)
  {
      bool x;
      int k=a[i];
      int m=b[i];
      x= k^m;
      cout<<x;
  }
cout<<endl;

    return 0;
}
