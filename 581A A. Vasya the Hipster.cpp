#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,big,s,ans;
    cin>>a>>b;
    if(a>b)
    {   big=a;
        ans=b;
        s=b;
    }
    else
    {    big=b;
        ans=a;
        s=a;
    }
    n=(big-s)/2;
    cout<<ans<<" "<<n<<endl;

    return 0;
}
