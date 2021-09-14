#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1;
    cin>>n;
    char st[2*n+1];
    for(int i=1; i<=2*n; i++)
        cin>>st[i];
    for(int i=1; i<2*n-2; i=i+2)
    {
        int j=i+2;
        if(st[i]!=st[j])
        {
            count++;

        }
    }
    cout<<count<<endl;

    return 0;

}
