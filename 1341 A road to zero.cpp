#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   long  long int x,y,a,b;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        if(x>y)
            swap(x,y);
        long long int ans=x*b+(y-x)*a;
        cout<<ans<<endl;

    }
    return 0;
}
