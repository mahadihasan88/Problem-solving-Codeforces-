#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,ar[200],count=0;
    cin>>n;
    char st[n+10];
    for(int i='a'; i<='z'; i++)
    {
        ar[i]=0;
    }
    getchar();
    gets(st);
    if(n>=26)
    {
        int x=strlen(st);
        for(int i=0; i<x; i++)
        {
            if(st[i]>='a' && st[i]<='z')
                ar[st[i]]++;

            if(st[i]>='A' && st[i]<='Z')
                ar[st[i]+32]++;
        }
        for(int i='a'; i<='z'; i++)
        {
            if(ar[i]>0)
                count++;

        }
        if(count==26)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    cout<<count<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;

}
