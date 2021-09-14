#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define fr(a,b) for(int i=a;i<b;i++)

int main()
{
    ll t;
    cin>>t;
    fr(0,t)
    {
        int n,k;
        cin>>n>>k;
        int x=sqrt(n);
        if(x>=k)
        {
            if(n%2==0&&k%2==0)
            {
                cout<<"YES\n";
            }
            else if(n%2==1&&k%2==1)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
