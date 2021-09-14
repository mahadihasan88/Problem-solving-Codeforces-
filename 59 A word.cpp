#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[110];
    gets(st);
    int x,count=0,k;
    x=strlen(st);
    for(int i=0;i<x;i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
            count++;
    }
    k=x-count;
  if(count>k)
  {
      for(int i=0;i<x;i++)
      {
          if(st[i]>='a'&&st[i]<='z')
            st[i]=st[i]-32;
      }
      puts(st);
  }
  else
  {
      for(int i=0;i<x;i++)
      {
          if(st[i]>='A'&&st[i]<='Z')
            st[i]=st[i]+32;
      }
      puts(st);
  }
  return 0;
}
