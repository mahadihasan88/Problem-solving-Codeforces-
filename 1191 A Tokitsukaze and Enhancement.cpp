#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,d,r;
    cin>>n;
    d=n/4;
    r=n%4;
    if(n==(4*d)&&r==0)
    {
        cout<<"1"<<" "<<"A"<<endl;
    }
    if(n=(4*d+2)&&r==2)
    {
        cout<<"1"<<" "<<"B"<<endl;
    }
     if(n=(4*d+3)&&r==3)
    {
        cout<<"2"<<" "<<"A"<<endl;
    }
     if(n=(4*d+1)&&r==1)
    {
        cout<<"0"<<" "<<"A"<<endl;
    }
   return 0;


}
