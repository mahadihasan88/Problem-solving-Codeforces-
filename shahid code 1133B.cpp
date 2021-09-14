
/**

   Author : sea_26

**/

#include "bits/stdc++.h"
using namespace std;

#define vsort(v)   sort(v.begin(),v.end())
#define M          1000000007
#define PI         acos(-1.0)
#define bitc(n)    __builtin_popcount(n)
#define fill(a,x)  memset(a,x,sizeof(a))
#define fastScan   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


#define db  double
#define ldb long double
#define ll  long long


#define mp  make_pair
#define pb  push_back
#define pf  push_front
#define vp  vector<int> v;


#define rep(i,n)       for(int i=0;i<n;i++)
#define repm(i,m)      for(int i=0;i<m;i++)
#define repp(i,a,b)    for(int i=a;i<=b;i++)
#define reff(i,a,b)    for(int i=a;i>=b;i--)


int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
ll lcm(int a, int b)
{
    return (a * (b / gcd(a, b)));
}
ll max(ll a,ll b,ll c)
{
    return max(a,max(b,c));
}

const int INF = INT_MAX;

multiset<int> ms;

int main()
{

    int n,k,x,v,cnt = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v = (k-x%k)%k;
        cout<<v<<" ";
        if(ms.count(v))
        {
            cnt++;
            ms.erase(ms.find(v));
            //cout<<cnt<<" ";
        }
        else
            ms.insert(x%k);
            cout<<endl;

    }

    return cout << 2*cnt << endl, 0;
}
