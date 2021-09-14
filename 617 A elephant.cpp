#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cin>>n;
    if(n>5)
    {
        x=n/5;
        if(n%5==0)
            cout<<x<<endl;
        else
            cout<<x+1<<endl;
    }
    else
        cout<<1<<endl;
    return 0;
}
