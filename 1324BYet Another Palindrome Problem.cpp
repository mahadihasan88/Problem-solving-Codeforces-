#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ar[n+1],a[5000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        a[ar[i]]++;
        if((a[ar[i]]==2) && (ar[i-1]!=ar[i])||(a[ar[i]]==3))
        {
            cout<<"YES"<<endl;
        break;
        }
        if(i==n-1)
        {
            cout<<"NO"<<endl;
        }
    }
    }
return 0;
}
