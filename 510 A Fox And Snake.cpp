#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int i=1; i<=m; i++)
                cout<<"#";
            cout<<endl;
        }
        else
        {
            if(i%4==0)
            {
                cout<<"#";
                for(int i=1; i<=m-1; i++)
                    cout<<".";
                cout<<endl;
            }
            else
            {
            for(int i=1; i<=m-1; i++)
                    cout<<".";
                    cout<<"#";
                cout<<endl;
            }
        }
    }
    cout<<endl;
    return 0;
}
