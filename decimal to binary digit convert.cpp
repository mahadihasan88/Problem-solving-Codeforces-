#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[100],i;
    cin>>n;
    for(i=0;n>0;i++)
    {
        ar[i]=n%2;
        n=n/2;
    }
    cout<<i;
    for( i=i-1;i>=0;i--){
        cout<<ar[i];
    }
    return 0;
}
