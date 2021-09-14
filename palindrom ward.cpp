#include<bits/stdc++.h>
using namespace std;


int main()
{
    char st[10000],sk;
    int x,j=0,str[200],l,s,skl;
    for(int i='a'; i<'z'; i++)
        str[i]=0;
    gets(st);
    x=strlen(st);
    sk=st[0];
    for(int i=0;i<x;i++)
    {
        if(st[i]!=sk)
            skl=1;
    }
    if(skl==0)
        cout<<"yes"<<endl;

    for(int i=0; i<strlen(st); i++)
    {
        if(st[i]>='a'&&st[i]<='z')
            str[st[i]]++;
    }
  int m=str['a'];

    for(int i='a'; i<='z'; i++)
    {
        if(str[i]!=m)
       l=1;

    }
         for(int i='a'; i<='z'; i++)
    {
        if(str[i]%2!=0)
       s=1;
    }
  //  if(l==0||s==0)
      //  cout<<"yes"<<endl;
    //else
       // cout<<"no"<<endl;

}
