#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,x=0;
    cin>>n;
    string st;
    for(int i=0; i<n; i++)
    {
        cin>>st;

         x=st.size();
        if(x==4)
            sum=sum+6;
        else if(x==10)
            sum=sum+8;
        else if(x==12)
            sum=sum+12;
        else if(x==11&&st[0]=='I')
            sum=sum+20;
        else
            sum=sum+4;
            x=0;

    }

    cout<<sum<<endl;
    return 0;
}
