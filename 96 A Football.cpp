#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110],s;
    int n,k,x=0,coun=0;
    gets(st);
    x=strlen(st);
    for(int i=0; i<=x-7; i++)
    {
        s=st[i];
        cout<<'s'<<" ";
          for(int j=i; j<i+7; j++)
        {
            if(s==st[j])
                coun++;
        }
       s='\n';
        if(coun>=7)
        {
            k=1;
            break;
        }
    }
    if(k==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
