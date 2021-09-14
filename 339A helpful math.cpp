#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110];
    int ar[100],i,k=0,x,m;
    gets(st);
    x=strlen(st);
    m=x/2+1;
    for(int i=0; i<x; i++)
    {
        if(st[i]=='1')
        {
            ar[k]=1;
            k++;
        }
        if(st[i]=='2')
        {
            ar[k]=2;
            k++;
        }
        if(st[i]=='3')
        {
            ar[k]=3;
            k++;
        }
    }
   sort(ar,ar+m);
    for(int j=0;j<m-1;j++)
        cout<<ar[j]<<"+";
        cout<<ar[m-1]<<endl;
        return 0;

}
