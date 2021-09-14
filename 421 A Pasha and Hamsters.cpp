#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,a,b;
    cin>>n>>a>>b;
    int ar[a],arr[b];
    for(int i=0;i<a;i++)
        cin>>ar[i];
    for(int i=0;i<b;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {        int count=0;
        for(int j=0;j<a;j++)
        {
            if(i==ar[j])
            count=1;
           continue;
        }
        if(count==1)
            cout<<"1"<<endl;
        else
        {
            count=0;
            cout<<"2"<<endl;
        }
    }
    return 0;
}
