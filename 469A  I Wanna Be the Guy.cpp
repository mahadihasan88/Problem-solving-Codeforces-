#include<bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    set<int>::iterator it;
    int n,p,q,ar[110],a[110],sum=0,math=0;
    cin>>n;
    math=n*(n+1)/2;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>ar[i];
        s.insert(ar[i]);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        sum=sum+*it;
    }
  if(sum==math)
    cout<<"I become the guy."<<endl;
  else
    cout<<"Oh, my keyboard!"<<endl;

  return 0;

}
