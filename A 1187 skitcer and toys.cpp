#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,t,k,T;
    cin>>T;
    while(T--)
    {
        cin>>n>>s>>t;
        if(s>t)
            swap(s,t);
        cout<<(n-s)+1<<endl;
    }
    return 0;
}
