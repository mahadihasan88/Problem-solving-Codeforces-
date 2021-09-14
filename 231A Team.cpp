#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[10],count=0,mcount=0;
    cin>>n;
    while(n--)
    {
        count=0;
        for(int i=0; i<3; i++)
        {
            cin>>ar[i];
            if(ar[i]==1)
                count++;
        }
        if(count>=2)
            mcount++;
    }
    cout<<mcount<<endl;
}
