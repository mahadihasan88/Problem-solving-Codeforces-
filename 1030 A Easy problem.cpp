#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=ar[i]+sum;
    }
    if(sum>0)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
