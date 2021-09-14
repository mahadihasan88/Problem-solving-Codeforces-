

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0;
    char st[1010];
    gets(st);
    x=strlen(st);

    set<int> s;

    for(int i=0;i<x;i++)
        s.insert(st[i]);
    int ans=s.size();
    if(x==2)
        cout<<"0"<<endl;
    else if(x==3)
        cout<<"1"<<endl;
    else
        cout<<ans-4<<endl;

    return 0;

}
