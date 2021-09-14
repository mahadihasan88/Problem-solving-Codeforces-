
#include<bits/stdc++.h>
using namespace std;
#define max 1000000
bool ar[max+11];
typedef long long ll;

void sieve()
{
    ar[0]=ar[1]=true;
    for(int i=4; i<=max; i=i+2)
        ar[i]=true;
    for(int i=3; i<=sqrt(max); i=i+2)
    {
        if(ar[i]==false)
            for(int j=i*i; j<=max; j+=i+i)
                ar[j]=true;

    }

}
int main()
{
    sieve();
    ll n,t,k,p,q;
    cin>>n;
    if(n%2==0)
    {
        k=n/2;
        if(ar[k]==true)
            cout<<k<<" "<<k<<endl;
        else
            cout<<k-1<<" "<<k+1<<endl;
    }
    else
    {
        int x=n/2;
        p=x;
        q=x+1;
        while((p+q!=n)&&((ar[p]==false)&&(ar[q]==false)))
        {
            p--;
            q++;
            p+q;
        }
        cout<<p<<" "<<q<<endl;
    }


    return 0;
}
