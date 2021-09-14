#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,x=0,t;
    cin>>t;
    while(t--)
    {
        k=0;
        x=0;
        cin>>n;
        int ar[n+10];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        sort(ar,ar+n);
        for(int i=0; i<n-1; i++)
        {
            if(ar[i]>k&&ar[i]==ar[i+1])
                x=i;
        }
        cout<<x<<endl;

    }
    return 0;

}
