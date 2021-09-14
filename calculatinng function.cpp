#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,sum=0;
    cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
        cout<<n/2-n<<endl;

    return 0;
}
