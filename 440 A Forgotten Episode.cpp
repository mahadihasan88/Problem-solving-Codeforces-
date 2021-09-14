#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1],k=0;
    for(int i=1; i<n; i++)
        cin>>ar[i];

    sort(ar+1,ar+n);
    for(int i=1; i<n; i++)
    {
   if(ar[i]!=i)
        {
            cout<<i<<endl;
            break;
        }
        else
            k=i;


    }
    if(k==n-1)
        cout<<n<<endl;
    return 0;
}

/*
 */
