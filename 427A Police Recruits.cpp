#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int f=0,unt=0,x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if( f==0 && x==-1)
            unt++;
        else if(x!=-1)
            f=f+x;
        else if(x==-1 && f>0)
            f--;
    }
    cout<<unt<<endl;
    return 0;

}
