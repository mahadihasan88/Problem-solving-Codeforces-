#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m+1];
    vector<int> v;
    vector<int>s;
    vector<int>::iterator it;

    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    for(int i=0;i<=m-n;i++)
    {
        for(int j=i;j<i+n;j++)
        {
            v.push_back(ar[j]);

        }

        int x=*max_element(v.begin(),v.end());
        int y=*min_element(v.begin(),v.end());
        s.push_back(x-y);
        v.clear();
        cout<<x-y<<" ";
    }
   int ans=*min_element(s.begin(),s.end());
   cout<<ans<<endl;
    return 0;
}
