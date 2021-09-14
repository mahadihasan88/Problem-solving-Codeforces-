#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
     while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            int x=a-b;
            if(x%2==0)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else if(b>a)
        {
            int x=b-a;
            if(x%2==0)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
