#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ar[100],ans=0,sum=0;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    sum=sum+ar[i];
    }
    ans=sum/n;
    cout<<ans<<endl;
    return 0;
}
