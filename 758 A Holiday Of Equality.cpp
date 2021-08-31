#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],sum=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n);
    int x=arr[n-1]*n;
    ans =x-sum;
    cout<<ans<<endl;
    return 0;

}
