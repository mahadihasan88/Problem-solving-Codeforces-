#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,prod=1,sum=0,k;
        cin>>n;
        int ar[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            prod=prod*ar[i];
            sum=sum+ar[i];
            k=sum;
        }
        if(sum==0&&prod!=0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            int count=0;
            for(int i=0; i<n; i++)
            {
                if(ar[i]==0)
                {
                    count++;
                    k++;
                }

            }
            if(k==0)
            {
                cout<<count+1<<endl;
            }
            else
                cout<<count<<endl;
        }
    }
    return 0;
}
