#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,x,y;
    vector<pair<int,int> > vp;
   vector<pair<int,int> > ::iterator it;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
    }
    sort(vp.begin(),vp.end());
    int ans=s,count=0;
    for(it=vp.begin();it!=vp.end();it++)
    {
        if(ans>it->first)
        {
            ans=ans+it->second;
            count++;
        }
        else{
            cout<<"NO"<<endl;
        return 0;
        }

    }
    if(count==n)
        cout<<"YES"<<endl;
    return 0;
}
