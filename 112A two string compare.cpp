#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[101],str[101];
    int i,k,x;
    gets(st);
    gets(str);
    x=strlen(st);
    for(int i=0; i<x; i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
            st[i]=st[i]+32;
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    }
    for(int i=0; i<x; i++)
    {
        if(st[i]!=str[i])
        {
            if(st[i]>str[i])
            {
                k=1;
                break;
            }
            else
            {
                k=-1;
                break;
            }
        }
        else
            k=0;

    }
    cout<<k<<endl;
    return 0;
}
