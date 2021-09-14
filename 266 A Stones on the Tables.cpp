
#include<bits/stdc++.h>
using namespace std;

int main()
{
     char st[55];
     int n,count=0;
     cin>>n>>st;
     for(int i=0;i<n-1;i++)
     {
         if(st[i]==st[i+1])
            count++;
     }
     cout<<count<<endl;

     return 0;
}
