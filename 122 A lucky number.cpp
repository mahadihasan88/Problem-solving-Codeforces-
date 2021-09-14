#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,count=0,k;
    cin>>n;
     int x=log10(n)+1;
    if(n%4==0||n%7==0)
        cout<<"YES"<<endl;
    else if(n%4!=0)
    {
        for(int i=0; i<x; i++)
        {
            k=n/10;
            v=n%10;
            if(v==4||v==7)
            {
                count++;
            }
            n=k;
        }
        if(count==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
