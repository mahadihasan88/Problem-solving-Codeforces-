#include<bits/stdc++.h>
using namespace std;

int main()
{

    char st[110],s[110],f[110];

    gets(st);
    gets(s);
    gets(f);
    strcat(st, s);
    int x=strlen(st);
    sort(st,st+x);

    int k=strlen(f),count=0;
    sort(f,f+k);
    if(x!=k)
        cout<<"NO"<<endl;
    else
    {
        for(int i=0; i<x; i++)
        {
            if(st[i]==f[i])
            {
                count++;
            }
        }
        if(count==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
