#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    while(n<=k)
    {
          n=n*3;
        k=k*2;
        count++;


    }
    cout<<count<<endl;
    return 0;
}
