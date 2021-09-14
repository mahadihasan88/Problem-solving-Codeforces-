#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        int count=1;
        if(b>a)
            a=a+b;
        else
            b=a+b;
        while(a<=n&&b<=n)
        {
            if(b>a)
                a=a+b;
            else
                b=a+b;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
