#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[4];
    for(int i=0; i<3; i++)
        cin>>ar[i];
    sort(ar,ar+3);

    int x=(ar[2]-ar[0]);
    cout<<x<<endl;
    return 0;
}
