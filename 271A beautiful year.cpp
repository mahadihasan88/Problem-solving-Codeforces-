#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ar[4],x,ans=0;
    cin>>x;
    n=x+1;
    int  main=x+1;
    while(ans!=4)
    {
        int n=main;
        for(int i=0; i<4; i++)
        {
            k=n%10;
            n=n/10;
            ar[i]=k;
            //cout<<k<<" ";
        }
        if((ar[0]!=ar[1]&&ar[0]!=ar[2]&&ar[0]!=ar[3]) && (ar[1]!=ar[2]&&ar[1]!=ar[3]) && (ar[2]!=ar[3]))
            ans=4;
        else
            main++;
    }
    cout<<main<<endl;

}
