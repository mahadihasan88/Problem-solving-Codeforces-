#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[110],a[110],count=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i]>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]==a[j])
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
