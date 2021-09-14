#include<bits/stdc++.h>
using namespace std;
#define max 1000000
bool ar[max+11];
typedef long long ll;

void sieve()
{
    ar[0]=ar[1]=true;
    for(int i=4; i<=max; i=i+2)
        ar[i]=true;
    for(int i=3; i<=sqrt(max); i=i+2)
    {
        if(ar[i]==false)
            for(int j=i*i; j<=max; j+=i+i)
                ar[j]=true;

    }
}
int main()
{
  sieve();
  ll n,t,k;
  cin>>t;
  while(t--)
  {
      cin>>n;
      k=sqrt(n);
      if(ar[k]==false&& k*k==n&& n>3)
        cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
  return 0;
}
