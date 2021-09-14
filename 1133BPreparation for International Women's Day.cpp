#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,count=0;
    cin>>n>>k;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        v.push_back(m);
    }
    vector<int>::iterator it,x;

    for(it=v.begin(); it!=v.end()-1; it++)
    {

        for(x=it+1; x!=v.end(); x++)
        {
            if((*it+*x)%k==0)
            {

     cout<<*it<<" "<<*x<<endl;
                v.erase(x);
               // v.erase(it);

                //break;
                count=count+2;
            }
        }



    }
    cout<<count<<endl;
    return 0;
}
