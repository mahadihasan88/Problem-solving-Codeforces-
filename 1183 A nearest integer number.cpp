#include<bits/stdc++.h>
using namespace std;
int mahadi(int n)
{
    int sum=0,x,m;
    x=log10(n)+1;
    for(int i=0; i<x; i++)
    {
        m=n%10;
        n=n/10;
        sum=sum+m;
    }
    return sum;

}
int main()
{
    int n,x,k;
    cin>>n;
    x=mahadi(n);
    if(x%4==0)
        cout<<n<<endl;
    else
    {
        while(x%4!=0)
        {
            n++;
            x=mahadi(n);
            k=n;
        }
        cout<<k<<endl;
        return 0;
    }

    return 0;

}


