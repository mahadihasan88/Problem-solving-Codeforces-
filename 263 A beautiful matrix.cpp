#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[6][6],x,y;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]==1)
            {
                x=i;
                y=j;
                break;
            }
        }
    }

    int m=fabs(x-3)+fabs(y-3);
    cout<<m<<endl;
    return 0;
}
