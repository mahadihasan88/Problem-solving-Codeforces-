#include<bits/stdc++.h>
using namespace std;
int check[10000]= {0};

int main()
{
    int num;
    cin>>num;
    int x=sqrt(num);

    for(int i=4; i<=num; i=i+2)
    {
        check[i]=1;
    }
    for(int i=3; i<=x; i=i+2)
    {
        if(check[i]==0)
        {
            for(int j=i+i; j<=num; j=i+j)
                check[j]=1;
        }
    }
    for(int i=2; i<=num; i++)
    {
        if(check[i]==0)
            cout<<i<<"-> prime"<<endl;

    }
    return 0;

}

