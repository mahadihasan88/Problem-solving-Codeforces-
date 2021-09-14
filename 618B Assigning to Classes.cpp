#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;

        cin>>n;
        int x=n;
        k=2*n;
        int ar[k+1];
        for(int i=0; i<k; i++)
            cin>>ar[i];
        sort(ar,ar+k);
        //for(int i=0; i<k; i++)
            //cout<<ar[i]<<" ";

        cout<<ar[x]-ar[x-1]<<endl;
    }
    return 0;

}
