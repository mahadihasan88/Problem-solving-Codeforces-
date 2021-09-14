#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,m,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    if(n%2==0)
    {
        n=n+2;
        x=(k-1)*2;
          cout<<n+x<<endl;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            if(n%i==0){
                m=i;
                break;
            }
        }
        int ans=n+m;
        x=(k-1)*2;
        cout<<x+ans<<endl;
    }
    }
    return 0;
}
