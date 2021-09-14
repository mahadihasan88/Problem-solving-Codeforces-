#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[100000],sum=0,m=0,k;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
     k=sum/4+sum%4;

        cout<<k<<endl;

    return 0;
}
