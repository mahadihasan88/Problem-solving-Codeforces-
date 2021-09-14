#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];

    vector<int> v;
    vector<int> ::iterator it;
    vector<int> ::iterator i;
    vector<int> s;
    vector<int> ::iterator k;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        v.push_back(ar[i]);
    }

    int count=0,x=0;
    for(it=v.begin(); it!=v.end()-1; it++)
    {
        i=it+1;
        if(*i<*it)
        {
            s.push_back(count);
            count=0;
        }

        else
        {
            count++;
            x=count;
        }
    }
    s.push_back(x);


    if(s.empty())
    {
        cout<<count+1<<endl;
    }
    else
        cout<<*max_element(s.begin(),s.end())+1<<endl;

    return 0;
}
