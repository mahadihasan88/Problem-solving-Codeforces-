#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;

        cin>>n>>k;
        int ar[n+1],a[n+1];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        for(int j=0; j<n; j++)
            cin>>a[j];
        sort(ar,ar+n);
        sort(a,a+n);
        int count=0,sum=0;
        for(int i=0; i<n; i++)
        {
            if(ar[n-1]<a[i])
                count++;
        }

        if(count>=k)
        {
            for(int i=n-1; i>=n-k; i--)
                sum=sum+a[i];
            for(int i=k; i<n; i++)
                sum=sum+ar[i];
            cout<<sum<<endl;
        }
        else
        {
            for(int i=n-1; i>=n-count; i--)
                sum=sum+a[i];
            for(int i=count; i<n; i++)
                sum=sum+ar[i];
            cout<<sum<<endl;

        }
    }
    return 0;
}
