/*all is well*/
/*
Problem  :
Verdict     :
Time         :

*/
#include<bits/stdc++.h>
using namespace std;
#define sf(a)          scanf("%d",&a)
#define sff(a,b)         scanf("%d%d",&a,&b)
#define sfff(a,b,c)         scanf("%d%d%d",&a,&b,&c)
#define sffff(a,b,c,d)         scanf("%d%d%d%d",&a,&b,&c,&d)
#define sl(a)          scanf("%lld",&a)
#define sll(a,b)         scanf("%lld%lld",&a,&b)
#define slll(a,b,c)         scanf("%lld%lld%lld",&a,&b,&c)
#define sllll(a,b,c,d)         scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sc(a) scanf("%c",&a)
#define sz(a)              a.size()
#define ff first
#define ss second
#define all(a)          a.begin(), a.end()
#define faster  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pf         printf
#define pf1(a)        pf("%d\n",a);
#define PI  acos(-1)
#define ll           long long
#define ull          unsigned long long
#define pb        push_back
#define vi           vector<int>
#define vl           vector<ll>
#define li         list<int>
#define pi          pair<int,int>
#define pl          pair<ll,ll>
#define mp         map
#define nl         cout<<endl
#define en        pf("Entered\n")
#define en1      pf("Entered 2\n")
#define gcd(a,b) __gcd(a,b)
#define sp  ' '
#define f0(a,n) for(int a=0;a<n;a++)
#define f1(a,n) for(int a=1;a<=n;a++)
#define MOD 1000000007


#define one cout<<"one"<<endl
#define two cout<<"two"<<endl
#define three cout<<"three"<<endl
#define four cout<<"four"<<endl
#define five cout<<"five"<<endl
#define six cout<<"six"<<endl


// priority_queue<int, vector<int>, greater<int> > Q;//for smaller values

#define MAX    100000



//'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48


int main()
{
   long long int n,m,a;
    cin>>n>>m>>a;
   long  long int x,k=0;
    x=n/a;
    if(n%a!=0)
    {
        k=m/a;
        if(m%a!=0)
        {
            k=k+1;
        }
    }
   long long  int ans1=x+k;
   // cout<<ans1;
   long long int l=m-a;
   long long  int y=0;
     y=l/a;
    //cout<<l<<" "<<y;
    if(l>0&&l%a!=0)
    {
        y=y+1;
    }
    long long int ans2=x*y+ans1;

    cout<<ans2<<endl;
    return 0;
}



