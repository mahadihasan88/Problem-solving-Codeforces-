#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n/2;
        if(n%2==0)
            ans=ans-1;
        cout<<ans<<endl;
    }

    return 0;
}
