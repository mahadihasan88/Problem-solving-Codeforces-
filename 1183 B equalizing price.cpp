#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k,t,sm,big,m;
   cin>>t;
   while(t--){
   cin>>n>>k;
   int ar[n+10];
   for(int i=0;i<n;i++)
    cin>>ar[i];
   sort(ar,ar+n);
   ///for(int i=0;i<n;i++)
   /// cout<<ar[i]<<" ";
   sm=ar[0];
   big=ar[n-1];
   m=sm+k;
   if(abs(m-big)<=k)
    cout<<m<<endl;
   else
    cout<<"-1"<<endl;
   }
   return 0;



}
