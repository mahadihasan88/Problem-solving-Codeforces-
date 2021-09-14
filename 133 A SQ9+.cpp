#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110];
    gets(st);
    int x=strlen(st),count=0;

    for(int i=0; i<x; i++)
    {
        if(st[i]=='H'||st[i]=='Q'||st[i]=='9')
            count++;

    }
    cout<<count<<endl;
    if(count!=0)
    {
        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;
    return 0;
}
