#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0,x=0,n;
    cin>>n;
    char st[60];
    getchar();
    for(int i=0; i<n; i++)
        cin>>st[i];


    x=strlen(st);
    for(int i=0; i<x-1; i++)
    {
        if(st[i]==st[i+1])
            count++;
    }
    cout<<count<<endl;
    return 0;
}
