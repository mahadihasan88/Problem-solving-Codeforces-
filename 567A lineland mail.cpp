#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,y,m,k,j;
    cin>>n;
    j=n;
    int ar[123456];
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];

    }

  cout<<abs(ar[1]-ar[2])<<" "<<abs(ar[1]-ar[n])<<endl;

        for(int i=2; i<n; i++)
        {
            x=abs(ar[i]-ar[i+1]);
            y=abs(ar[i]-ar[i-1]);
            if(x>y)
                cout<<y<<" ";
            else
                cout<<x<<" ";
            m=abs(ar[n]-ar[i]);

            k=abs(ar[i]-ar[1]);

            if(m>k)
                cout<<m<<endl;
            else
                cout<<k<<endl;

        }

        cout<<abs(ar[n]-ar[n-1])<<" "<<abs(ar[n]-ar[1])<<endl;
    return 0;
}
