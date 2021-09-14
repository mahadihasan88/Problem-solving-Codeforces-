#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,x,a,b,d;

    cin>>a>>d>>n;
    if(n%2!=0)
    {
        x=(a+(((n-1)*a)/2))*n;

    }
    else
        x=(2*a+(n-1)*a)*(n/2);

    if(x>d)
    {
        cout<<x-d<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}

