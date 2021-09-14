#include<bits/stdc++.h>
using namespace std;

int main()
{
    double k,n,x,y;
    int l,m;
    cin>>n>>x>>y;
    k=(n*y)/100;
    l=ceil(k);
//cout<<l<<endl;
    m=l-x;
    if(m<0)
        m=0;
    cout<<m<<endl;
    return  0;
}

