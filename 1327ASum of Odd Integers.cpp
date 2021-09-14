#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)

    {
        int  n,k;
        cin>>n>>k;
        int  x=sqrt(k);
        if(x<=k)
        {
            if(n%2==k%2)
                cout<<"YES"<<endl;

            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;


    }
    return 0;

}
