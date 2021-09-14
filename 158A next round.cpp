#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,ar[110],s=0,count=0,m=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>ar[i];
    for(int i=1; i<=n; i++)
    {
        if(ar[i]==0)
            m++;
    }
    s=ar[k];
    for(int i=1; i<=n; i++)
    {
        if(ar[i]!=0 && ar[i]>=s)
            count++;
    }

    if(m!=n)
    cout<<count<<endl;
    else
        cout<<"0"<<endl;
    return 0;

}
