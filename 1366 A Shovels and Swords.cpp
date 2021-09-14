#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,ans=0;
        cin>>x>>y;
        if(x>y)
             ans=y;
             else
                ans=x;
        int k=(x+y)/3;
        if(ans>k)
            cout<<k<<endl;
        else
            cout<<ans<<endl;



    }
    return 0;
}
