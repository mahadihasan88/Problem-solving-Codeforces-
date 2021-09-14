#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110];
    gets(st);
    int x=strlen(st),count=0;
    for(int i=1; i<x; i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
            count++;
    }
    if(count==x-1)
    {
        if(st[0]>='A'&&st[0]<='Z')
            for(int i=0; i<x; i++)
                cout<<char(st[i]+32);
        else
        {

            cout<<char(st[0]-32);
            for(int i=1; i<x; i++)
                cout<<char(st[i]+32);
        }

    }
    else
        puts(st);
    cout<<endl;
}
