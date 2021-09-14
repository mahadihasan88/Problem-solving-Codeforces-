#include<bits/stdc++.h>
using namespace std;


int main()
{
  long  int n;
    cin>>n;
    int x1=0,x2=0,x3=0,x4=0;
    if(n>=100)
    {
        x1=n/100;
        n=n%100;
        //cout<<x1<<" ";

    }
    if(n>=20&&n<100)
    {
        x2=n/20;
        n=n%20;
        // cout<<x2<<" ";
    }
    if(n>=10&&n<20)
    {
        x3=n/10;
        n=n%10;

    }
    if(n>=5&&n<=10)
    {
        x4=n/5;
        n=n%5;

    }


    cout<<x1+x2+x3+x4+n<<endl;
    return 0;





}
