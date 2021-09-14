#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[12345],a[123456];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ar[i];
        for(int i=1;i<=n;i++)
        {
            a[ar[i]]=i;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";

}
