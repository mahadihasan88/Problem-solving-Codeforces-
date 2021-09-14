#include<bits/stdc++.h>
using namespace std;
void power(int x,int j)
{
    int  ans=1;
    for(int i=0; i<j; i++)
    {
        ans=ans*10;
    }
    cout<<x*ans<<" ";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=0,count=0,n,m,ans;

        cin>>n;
        int y=n,l;
        x=log10(n)+1;
        for(int i=0; i<x; i++)
        {
            l=y%10;
            y=y/10;
            if(l!=0)
                count++;
        }
        cout<<count<<endl;

        for(int i=0; i<x; i++)
        {

            m=n%10;
            n=n/10;
            if(m!=0)
                power(m,i);
        }
        cout<<endl;

    }
    return 0;
}
