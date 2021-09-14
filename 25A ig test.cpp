#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1],eans=0,oans=0,even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            even++;
            eans=i;
        }
        else
        {
            odd++;
            oans=i;
        }
    }
    if(even>odd)
        cout<<oans+1<<endl;
    else
        cout<<eans+1<<endl;
    return 0;
}
