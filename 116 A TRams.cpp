#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+10],ar[n+10];
    for(int i=0; i<n; i++)
        cin>>a[i]>>ar[i];

    int s=a[0]+ar[0],great=0;

    for(int i=1; i<n; i++)
    {
        if(s>great)
        {
            great=s;
        }
        s=s-a[i];
        s=s+ar[i];

    }
    cout<<great<<endl;
    return 0;
}
