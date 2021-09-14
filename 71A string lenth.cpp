#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110];
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int k=0;
        gets(st);
        k=strlen(st);
       if(k>10)
        cout<<st[0]<<k-2<<st[k-1]<<endl;
       else
        puts(st);

    }
    return 0;
}
