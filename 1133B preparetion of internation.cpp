#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,k,x,count=0;
    cin>>n>>k;
    vector <int> v;
    vector<int>::iterator it,i;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=v.begin(); i!=v.end(); i++)
    {
        it=i+1;
        {
            for(it; it!=v.end(); it++)
            {
                if((*i+*it)%k)
                {
                    count=count+2;
                    v.erase(it);
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;


}
