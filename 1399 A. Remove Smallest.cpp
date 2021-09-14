#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n ,ar[100],count;
    bool ans=true;
    cin>>t;

  while(t--){
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        count=0;
        sort(ar,ar+n);
        for(int i=0;i<n-1;i++)
          {
              if(abs(ar[i+1]-ar[i])<=1)
                count++;

          }
          if(count==n-1)
          cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;

    }
    return 0;
}
