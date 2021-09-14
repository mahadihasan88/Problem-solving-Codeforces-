#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,i,sum=0;
    cin>>n>>h;
    int ar[100000];
    for(int i=0;i<n;i++)
    {
    cin>>ar[i];
    if(ar[i]>h)
        sum=sum+2;
    else
        sum=sum+1;
    }
    cout<<sum<<endl;
    return 0;


}
