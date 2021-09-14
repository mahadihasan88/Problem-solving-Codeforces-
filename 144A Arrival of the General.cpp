#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1],max=0,m=0,min=10000,k=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(ar[i]>=max)
        {
            max=ar[i];
            m=i;
        }
        if(ar[i]<=min)
        {
            min=ar[i];
            k=i;
        }
    }
    if(m>k)
    {
        ans=(m-2)+(n-k);
    }
    else
    {
        ans=(m-1)+(n-k);
    }
    cout<<ans<<endl;
    //cout<<max<<" "<<min<<endl<<m<<" "<<k<<endl;
    return 0;
}
