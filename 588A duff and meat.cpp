#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int ar[110],p[110],n,sum=0;
    scanf("%ld",&n);
    for(int i=0; i<n; i++)
        scanf("%ld%ld",&ar[i],&p[i]);
    int a=p[0];
    for(int i=0; i<n; i++)
    {
        if(a>p[i])
            a=p[i];
        if(a<=p[i])
        {
            sum=sum+a*ar[i];
        }
        //else
            //sum=sum+ar[i]*p[i];
    }
    printf("%ld\n",sum);

    return 0;
}
