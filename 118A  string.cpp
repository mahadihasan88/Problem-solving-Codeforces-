#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[100],str[100]={0};
    int i,k,j=0;
    gets(st);
    k=strlen(st);
    for(int i=0;i<k;i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
            st[i]=st[i]+32;
    }

   for(int i=0;i<k;i++)
   {
       if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='y')
        st[i]=0;
        else
            cout<<"."<<st[i];

   }

   cout<<endl;
   return 0;
}
