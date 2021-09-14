#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,t;
    char st[10];
    cin>>t;
    getchar();
    while(t--)
    {
        gets(st);
        if(st[0]=='+'&&st[1]=='+')
            ++sum;
        else if(st[1]=='+'||st[2]=='+')
            sum++;
     else if(st[0]=='-'||st[1]=='-')
        --sum;
     else
        sum--;
    }
    cout<<sum<<endl;

}
