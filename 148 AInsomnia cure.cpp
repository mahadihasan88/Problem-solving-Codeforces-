#include<bits/stdc++.h>
using namespace std;


int main()
{

    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    int ar[d]= {0} ;
    for(int i=k; i<=d; i=i+k)
    {
        ar[i]=1;
        c++;
    }
    for(int i=l; i<=d; i=i+l)
    {
        if(ar[i]!=1)
        {
            ar[i]=1;
            c++;
        }
    }
    for(int i=m; i<=d; i=i+m)
    {
        if(ar[i]!=1)
        {
            ar[i]=1;
            c++;
        }
    }
     for(int i=n; i<=d; i=i+n)
    {
        if(ar[i]!=1)
        {
            ar[i]=1;
            c++;
        }
    }
    cout<<c<<endl;

    return 0;

}
