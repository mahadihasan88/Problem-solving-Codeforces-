#include<bits/stdc++.h>
using namespace std;

int main()
{

    char st[210];
    gets(st);

    int x=strlen(st);
    //cout<<x<<endl;
    int i,k=0;
    for(i=3; i<x-3;)
    {
        if(st[i]=='W'&&st[i+1]=='U'&&st[i+2]=='B')
        {
            i=i+3;
            cout<<" ";
        }
        else
        {
            cout<<st[i];
            i++;
        }
       // i=k;
    }
    cout<<endl;
}
