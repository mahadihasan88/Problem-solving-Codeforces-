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

int flag[12];
int main()
{



  long long int  n,k;
  cin>>n>>k;


   long long int x,ans;
   // cout<<n<<" "<<k<<endl;
     x=n/2;
    if(n%2!=0)
    {
        x=x+1;
    }
    //cout<<x<<" "<<endl;
    if(k<=x)
    {
        ans=2*k-1;
    }
    else if(n%2!=0)
    {
        ans=2*k-n-1;
        //cout<<ans<<" k";
    }
    else
    {
        ans=2*k-n;
    }
    cout<<ans<<endl;
    return 0;
}



