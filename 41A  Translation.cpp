#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110],s[110];

    gets(st);
    gets(s);
    int x=0,y=0,count=0;
    x=strlen(st);
    y=strlen(s);
    if(x!=y)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<x; i++)
        {
            if(st[i]==s[x-1-i])
                count++;
        }
        if(count==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;

}
