#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[100];
    gets(st);
    int x,count=0,l=0,k=0;
    x=strlen(st);
    for(int i=0; i<x; i++)
    {
        if(st[i]=='4'||st[i]=='7')
      count++;
    }
    if(count==4||count==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
